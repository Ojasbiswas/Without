using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    //variable
    public float health = 100;

    Transform player;

    public Text healthText;

    private void Awake()
    {
        player = GameObject.Find("Character Controller").transform;
    }

    private void Update()
    {
        if (healthText != null)
        {
            healthText.text = "Health: " + health;
        }
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
        Debug.Log("Health:" + health);
        if (health <= 0)
        {
            Dead();
        }
    }

    void Dead()
    {
        Debug.Log("Dead");
        Destroy(gameObject);
        if (gameObject.tag == "Fake Enemy")
        {
            player.position = transform.position;
        }
        else if (gameObject.tag == "Player")
        {
            SceneManager.LoadScene("You Lost");
        }
    }
}
