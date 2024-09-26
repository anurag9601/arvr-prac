using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class changeColor : MonoBehaviour
{
    public Renderer sphererenderer;
    public GameObject sphere;
    public Color newcolor;
 
    public void ChangeColor() {
        newcolor = Random.ColorHSV();
        sphererenderer.material.color = newcolor;
    }
 
    // Start is called before the first frame update
    void Start()
    {
        sphererenderer = sphere.GetComponent<Renderer>();
    }
 
    // Update is called once per frame
    void Update()
    {
 
    }
}