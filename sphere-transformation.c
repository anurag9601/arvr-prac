using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class moveBall : MonoBehaviour
{
    public float Speed;
    // Start is called before the first frame update
    void FixedUpdate()
    {
        float HorizontalMovement = Input.GetAxis("Horizontal");
        float VerticalMovement = Input.GetAxis("Vertical");
        Vector3 MoveBall = new Vector3(HorizontalMovement, 0, VerticalMovement);
        gameObject.transform.GetComponent<Rigidbody>().AddForce(MoveBall * Speed);
    }
 
    void Start()
    {
 
    }
 
    // Update is called once per frame
    void Update()
    {
 
    }
}