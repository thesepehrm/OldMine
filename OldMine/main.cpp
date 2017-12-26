//
//  main.cpp
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GLUT/gl.h>
#endif

#include <iostream>
#include <math.h>


/*
 Defining the default width and HEIGHT of the window
*/
unsigned int WIDTH = 600;
unsigned int HEIGHT = 600;

/* Light0 Properties */
GLfloat whiteDiffuseLight[] = {2.0, 2.0, 2.0};
GLfloat lightPosition[] = { 0.0, 100.0 ,0.0, 0.3f };


void init();
void display();
void setLight();
void reshape(int,int);
//void keyboardDown(char,int,int);
//void keyboardUp(char,int,int);
//void keyboardSpecialUp(int,int,int);
//void keyboardSpecialDown(int,int,int);


int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    init();
    
    glutMainLoop();
    return 0;
}

void init()
{
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(int((glutGet(GLUT_SCREEN_WIDTH) / 2) - WIDTH / 2), int((glutGet(GLUT_SCREEN_HEIGHT) / 2) - HEIGHT / 2));
    glutCreateWindow("Old Mine");
    
    //Register callbacks
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    
    //glutSpecialFunc(keyboardSpecialDown);
    //glutSpecialUpFunc(keyboardSpecialUp);
    
    //Depth Effect
    glEnable(GL_DEPTH_TEST);
    
    //Alpha
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    glEnable(GL_COLOR_MATERIAL);
    
    /*
     glEnable(GL_LIGHTING);
     glEnable (GL_LIGHT0);
     setLight();
     */
}



void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0/255 * 3, 1.0/255 * 198, 1.0, 1.0); //Cyan
    //setLight();
    glLoadIdentity();
    
    glutSolidCube(1);
    
    
    glutSwapBuffers();
}

void reshape(int width, int height)
{
    if (height == 0) {
        height = 1;
    }
    float ratio = 1.0 * width / height;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, width, height); // clipping area
    
    gluPerspective(45, ratio, 1, 1000);
    glMatrixMode(GL_MODELVIEW);
}
