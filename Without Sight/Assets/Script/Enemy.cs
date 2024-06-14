using System.Collections;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public float health = 20f;
    public Transform playerBody;

    // Enemy AI
    public NavMeshAgent agent;
    public LayerMask whatIsGround, whatIsPlayer;

    // Patrolling
    public Vector3 walkPoint;
    public bool walkPointSet;
    public float walkPointRange;

    // Attacking
    public float timeBetweenAttack;
    public bool alreadyAttacked;

    // States
    public float sightRange, attackRange;
    public bool playerInSightRange, playerInAttackRange;

    // Events
    public delegate void EnemyKilled();
    public static event EnemyKilled OnEnemyKilled;

    // Script
    public Shoot playerScript;
    Player p;

    // Particle System
    public GameObject explosionEffect;

    // Time System
    public float delay = 8.5f;
    private float timer = 0;

    // Attacking State
    public bool canAttack = false;
    public static bool canChase = true;
    public bool isAttacking = false;

    public bool toKill = false;

    // Audios
    public AudioSource source;
    public AudioClip fastBeep;
    public AudioClip slowBeep;

    // State to track if beeping is started
    private bool isBeeping = false;

    private void Awake()
    {
        playerScript = GameObject.Find("Main Camera").GetComponent<Shoot>();
        playerBody = GameObject.Find("Character Controller").transform;
        agent = GetComponent<NavMeshAgent>();
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
        if (health <= 0)
        {
            Die();
        }
    }

    public void Die()
    {
        if (!toKill)
        {
            OnEnemyKilled?.Invoke();
            gameObject.SetActive(false);
        }
        else
        {
            Destroy(gameObject);
        }
        playerBody.position = transform.position;
    }

    private void DieByItself()
    {
        if (!toKill)
        {
            OnEnemyKilled?.Invoke();
            gameObject.SetActive(false);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void ResetEnemy()
    {
        health = 20f;
        gameObject.SetActive(true); // Activate the enemy
    }

    private void Update()
    {
        // Check for sight and attack range
        playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
        playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);

        Debug.Log(canAttack);

        if (!playerInSightRange && !playerInAttackRange)
        {
            Patrolling();
        }

        if (playerInSightRange && !playerInAttackRange && canChase)
        {
            canChase = false;
            agent.SetDestination(playerBody.position);
            Debug.Log("sorted");
            canAttack = true;
        }
        else
        {
            Debug.Log("Cant chase");
        }

        if (playerInSightRange && playerInAttackRange && canAttack)
        {
            timer = 0;
            isAttacking = true;
            isBeeping = false;
            canAttack = false;
        }
        else
        {
            Debug.Log("Cant atk");
        }


        if (isAttacking)
        {
            timer += Time.deltaTime;
            HandleBeeping();
            if (timer > delay)
            {
                Attacking();
            }
        }
    }


    private void OnDisable()
    {
        canChase = true;
    }

    private void ResetState()
    {
        timer = 0;
        isBeeping = false;
        source.Stop();
        if (isAttacking)
        {
            isAttacking = false;
        }
    }

    private void HandleBeeping()
    {
        if (!isBeeping)
        {
            source.clip = slowBeep;
            source.Play();
            isBeeping = true;
        }
        else if (timer > 6 && timer < 8 && source.clip != fastBeep)
        {
            source.clip = fastBeep;
            source.Play();
        }
        else if (timer >= 8 && timer <= 8.5f)
        {
            source.Stop();
        }
    }

    private void Patrolling()
    {
        if (!walkPointSet) SearchWalkPoint();

        if (walkPointSet)
        {
            agent.SetDestination(walkPoint);
        }

        // Use the agent's remaining distance to determine if the walk point is reached
        if (!agent.pathPending && agent.remainingDistance <= agent.stoppingDistance)
        {
            if (!agent.hasPath || agent.velocity.sqrMagnitude == 0f)
            {
                walkPointSet = false;
                StartCoroutine(WaitAtWalkPoint(1f)); // Wait for 1 second
            }
        }
    }

    private void SearchWalkPoint()
    {
        float randomZ = Random.Range(-walkPointRange, walkPointRange);
        float randomX = Random.Range(-walkPointRange, walkPointRange);

        walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
        walkPointSet = true;
    }

    private void Chasing()
    {
        canChase = false;
        agent.SetDestination(playerBody.position);
        Debug.Log("sorted");
    }

    private void Attacking()
    {
        // Implement attacking logic
        Collider[] player = Physics.OverlapSphere(transform.position, 5f, whatIsPlayer);
        foreach (Collider pl in player)
        {
            p = pl.transform.GetComponent<Player>();
            if (p != null)
            {
                break;
            }
        }

        if (p != null)
        {
            p.TakeDamage(Random.Range(9, 13));
        }

        Vector3 previousTransform = transform.position;
        GameObject explosion = Instantiate(explosionEffect, previousTransform, Quaternion.identity);
        explosion.GetComponent<ParticleSystem>().Play();
        Destroy(explosion, 1f);
        ResetState(); // Reset state after attacking
        DieByItself();
    }

    private IEnumerator WaitAtWalkPoint(float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        SearchWalkPoint();
    }
}
