using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour
{
    [Header("Main Menu Variables")]
    public GameObject playMenu;
    public GameObject optionMenu;
    public GameObject mainMenu;


    private void Awake()
    {
        Cursor.lockState = CursorLockMode.None;
        if (SceneManager.GetActiveScene().name == "Main Mene")
        {
            playMenu.SetActive(false);
            optionMenu.SetActive(false);
        }
    }

    public void sensitivitySlider(float value)
    {
        DataKeeper.sensitivity = value;
    }

    public void Continue(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void Play()
    {
        mainMenu.SetActive(false);
        playMenu.SetActive(true);
    }

    public void Option()
    {
        mainMenu.SetActive(false);
        optionMenu.SetActive(true);
    }

    public void BackOption()
    {
        optionMenu.SetActive(false);
        mainMenu.SetActive(true);
    }

    public void Quit()
    {
        Application.Quit();
    }

}
