using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemySpawner : MonoBehaviour
{
    public GameObject enemyPrefab; // The enemy prefab to spawn
    public int numberOfEnemies = 50; // Number of enemies to spawn
    public float spawnRadius = 100f; // Radius around the spawner where enemies can be spawned
    public float minSpawnDistance = 5f; // Minimum distance between spawned enemies
    public int maxAttempts = 10; // Maximum attempts to find a valid spawn position

    private List<GameObject> enemyPool = new List<GameObject>();
    private List<Vector3> spawnPoints = new List<Vector3>();

    void Start()
    {
        // Create the initial pool of enemies
        for (int i = 0; i < numberOfEnemies; i++)
        {
            GameObject enemy = Instantiate(enemyPrefab);
            enemy.SetActive(false); // Ensure the enemy is inactive initially
            enemyPool.Add(enemy);
        }

        // Start spawning enemies over time
        StartCoroutine(SpawnEnemiesOverTime());

        Enemy.OnEnemyKilled += HandleEnemyKilled;
    }

    void OnDestroy()
    {
        Enemy.OnEnemyKilled -= HandleEnemyKilled;
    }

    IEnumerator SpawnEnemiesOverTime()
    {
        for (int i = 0; i < numberOfEnemies; i++)
        {
            SpawnEnemy();
            yield return new WaitForSeconds(0.1f); // Delay to spread out the load
        }
    }

    void SpawnEnemy()
    {
        Vector3 randomPoint = GetValidRandomPointOnNavMesh(transform.position, spawnRadius);
        if (randomPoint != Vector3.zero)
        {
            GameObject enemy = GetPooledEnemy();
            if (enemy != null)
            {
                enemy.transform.position = randomPoint;
                enemy.transform.rotation = Quaternion.identity;
                enemy.SetActive(true); // Ensure the enemy is active
                enemy.GetComponent<Enemy>().ResetEnemy();
                spawnPoints.Add(randomPoint); // Add the point to the list of spawn points
            }
            else
            {
                Debug.LogWarning("No available enemies in the pool!");
            }
        }
        else
        {
            Debug.LogWarning("Failed to find a valid point on the NavMesh after multiple attempts!");
        }
    }

    Vector3 GetValidRandomPointOnNavMesh(Vector3 center, float radius)
    {
        for (int i = 0; i < maxAttempts; i++)
        {
            Vector3 randomDirection = Random.insideUnitSphere * radius;
            randomDirection += center;
            NavMeshHit hit;
            if (NavMesh.SamplePosition(randomDirection, out hit, radius, NavMesh.AllAreas))
            {
                if (hit.position.y <= 2 && IsFarEnoughFromOtherPoints(hit.position)) // Ensure the y position is valid and point is far enough
                {
                    return hit.position;
                }
            }
        }
        return Vector3.zero;
    }

    bool IsFarEnoughFromOtherPoints(Vector3 point)
    {
        foreach (Vector3 spawnPoint in spawnPoints)
        {
            if (Vector3.Distance(point, spawnPoint) < minSpawnDistance)
            {
                return false;
            }
        }
        return true;
    }

    void HandleEnemyKilled()
    {
        SpawnEnemy();
    }

    GameObject GetPooledEnemy()
    {
        foreach (GameObject enemy in enemyPool)
        {
            if (!enemy.activeInHierarchy)
            {
                return enemy;
            }
        }
        return null;
    }
}
