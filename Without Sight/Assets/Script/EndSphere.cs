using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class EndSphere : MonoBehaviour
{
    public TMP_Text text;
    public LayerMask whatIsPlayer;
    public float detectionRadius = 100f; // Radius for player detection

    // Start is called before the first frame update
    void Start()
    {
        // Ensure text is assigned
        if (text == null)
        {
            Debug.LogError("TMP_Text component not assigned!");
        }
    }

    // Update is called once per frame
    void Update()
    {
        Collider[] player = Physics.OverlapSphere(transform.position, detectionRadius, whatIsPlayer);
        if (player.Length > 0)
        {
            Debug.Log("Player is in range");
            if (text != null)
            {
                text.text = "Shoot the Sphere to escape the maze";
            }
            else
            {
                Debug.LogError("TMP_Text component is missing!");
            }
        }
        else
        {
            text.text = "Escape The Maze";
        }
    }

    public void LoadYouWonPanel()
    {
        SceneManager.LoadScene("You Won");
    }

    // Draw the detection sphere in the editor for debugging
    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(transform.position, detectionRadius);
    }
}
