using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class TutorialManger : MonoBehaviour
{
    // Texts
    public TMP_Text objectiveText;
    public TMP_Text noteText;

    // Strings
    public string[] objectiveString;
    public string[] noteString;

    // GameObject/Prefab
    public GameObject fakeEnemy;
    public GameObject realEnemy;
    public GameObject CC;

    // Lists
    public List<GameObject> fakeEnemies = new List<GameObject>();
    public List<GameObject> realEnemies = new List<GameObject>();

    // Indexes
    [SerializeField, Range(-1, 2)]int noteIndex = -1;
    [SerializeField, Range(0, 1)]int objectiveIndex = 0;

    // Flags
    bool realEnemiesSpawned = false;
    public bool incremented = false;
    public bool completed = false;

    Transform playerTransform;
    public LayerMask whatIsEnemy;

    private void Awake()
    {
        Debug.Log("Awake called");

        // Check and log all the important fields to ensure they are assigned
        if (objectiveText == null) Debug.LogError("Objective Text is not assigned");
        if (noteText == null) Debug.LogError("Note Text is not assigned");
        if (fakeEnemy == null) Debug.LogError("Fake Enemy is not assigned");
        if (realEnemy == null) Debug.LogError("Real Enemy is not assigned");
        if (CC == null) Debug.LogError("Character Controller is not assigned");

        // Initialize the fake enemies
        GameObject a = Instantiate(fakeEnemy, new Vector3(-6, 1f, 0), Quaternion.identity);
        GameObject b = Instantiate(fakeEnemy, new Vector3(6, 1f, 0), Quaternion.identity);
        GameObject c = Instantiate(fakeEnemy, new Vector3(0, 1f, 6), Quaternion.identity);
        GameObject d = Instantiate(fakeEnemy, new Vector3(0, 1f, -6), Quaternion.identity);
        fakeEnemies.Add(a);
        fakeEnemies.Add(b);
        fakeEnemies.Add(c);
        fakeEnemies.Add(d);

        // Find the Character Controller
        CC = GameObject.Find("Character Controller");
        if (CC == null)
        {
            Debug.LogError("Character Controller not found");
            return;
        }
        playerTransform = CC.transform;
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Clean up fakeEnemies list
        for (int i = fakeEnemies.Count - 1; i >= 0; i--)
        {
            if (fakeEnemies[i] == null)
            {
                fakeEnemies.RemoveAt(i);
            }
        }

        // Clean up realEnemies list
        for (int i = realEnemies.Count - 1; i >= 0; i--)
        {
            if (realEnemies[i] == null)
            {
                realEnemies.RemoveAt(i);
            }
        }

        objectiveDisplayer();
        noteDisplayer();

        // Ensure objectiveText is updated correctly
        if (objectiveIndex >= 0 && objectiveIndex < objectiveString.Length)
        {
            objectiveText.text = objectiveString[objectiveIndex];
        }

        // Ensure noteText is updated correctly within bounds
        if (noteIndex >= 0 && noteIndex < noteString.Length)
        {
            noteText.text = noteString[noteIndex];
        }

        // Log the count of realEnemies and the value of completed
        Debug.Log("Real Enemies Count: " + realEnemies.Count);
        Debug.Log("Completed: " + completed);

        if (realEnemies.Count == 0 && completed)
        {
            Debug.Log("All real enemies are defeated. Loading the next scene...");
            SceneManager.LoadScene(2);
        }
    }



    private void objectiveDisplayer()
    {
        if (fakeEnemies.Count == 0 && !realEnemiesSpawned)
        {
            objectiveIndex++;
            SpawnRealEnemy();
            realEnemiesSpawned = true;
        }
    }

    private void SpawnRealEnemy()
    {
        if (realEnemy == null)
        {
            Debug.LogError("RealEnemy prefab is not assigned.");
            return;
        }

        GameObject a = Instantiate(realEnemy, new Vector3(-1, 1.5f, 0), Quaternion.identity);
        GameObject b = Instantiate(realEnemy, new Vector3(1, 1.5f, 0), Quaternion.identity);
        realEnemies.Add(a);
        realEnemies.Add(b);
    }

    private void noteDisplayer()
    {
        // Check if noteIndex is within bounds before incrementing
        if (fakeEnemies.Count < 4 && !incremented && noteIndex + 1 == 0)
        {
            noteIndex++;
            incremented = true;
            Debug.Log("Incremented noteIndex due to fakeEnemies.Count < 4. New noteIndex: " + noteIndex);
        }

        bool last = false;
        if (fakeEnemies.Count == 0 && incremented && noteIndex + 1 < noteString.Length && !last)
        {
            noteIndex++;
            incremented = false;
            last = true;
            Debug.Log("Incremented noteIndex due to fakeEnemies.Count == 0. New noteIndex: " + noteIndex);
        }


        if (!incremented && last)
        {
            noteIndex++;
            incremented = false;
            completed = true;
            last = false;
            Debug.Log("Incremented noteIndex due to enemiesInRange.Length > 0. New noteIndex: " + noteIndex);
            Debug.Log("Completed is set to true");
        }

        // Ensure noteIndex is within bounds before setting noteText
        if (noteIndex >= 0 && noteIndex < noteString.Length)
        {
            noteText.text = noteString[noteIndex];
            Debug.Log("Updated noteText: " + noteString[noteIndex]);
        }
        else
        {
            Debug.LogWarning("noteIndex is out of bounds: " + noteIndex);
        }
    }



}
