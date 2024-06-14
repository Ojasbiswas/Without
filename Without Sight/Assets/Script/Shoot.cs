using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

public class Shoot : MonoBehaviour
{
    public float damage = 10f;
    public float detectionRadius = 5f;
    public float fireRate = 2f;
    public float nextTimeToFire = 0f;

    public ParticleSystem muzzleFlash;

    public Camera fpsCam;

    public AudioSource firingAudio;

    // Start is called before the first frame update
    void Start()
    {
        fpsCam = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        damage = Random.Range(5, 11);
        if (Input.GetButtonDown("Fire1") && Time.time >= nextTimeToFire)
        {
            nextTimeToFire = Time.time + 1f / fireRate;
            Fire();
        }

    }

    void Fire()
    {
        PlayMuzzleFlash();
        firingAudio.Play();

        RaycastHit hit;
        if (Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit))
        {
            Enemy target = hit.transform.GetComponent<Enemy>();
            Player target1 = hit.transform.GetComponent<Player>();
            EndSphere es = hit.transform.GetComponent<EndSphere>();
            if (target != null)
            {
                target.TakeDamage(damage);
            }
            else if (target1 != null)
            {
                target1.TakeDamage(damage);
            }
            else if (es != null)
            {
                Debug.Log("es is not null");
                es.LoadYouWonPanel();
            }

        }
    }

    void PlayMuzzleFlash()
    {
        if (muzzleFlash.isPlaying)
        {
            muzzleFlash.Stop();
        }
        muzzleFlash.Play();
    }
}
