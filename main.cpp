#include<stdio.h>
#include<math.h>
#include<windows.h>
#include <GL/glut.h>
#include<iostream>

#include <stdlib.h>
#include "game.h"
#include"ball.h"
extern int q;
int mouse;
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(7,timer,0);
}
void motion(int x,int y)
{
    mouse=x;

}
void Mouse(int b,int s ,int x,int y)
{
    if(b== GLUT_LEFT_BUTTON||b== GLUT_RIGHT_BUTTON)
        q=1;

}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

    play(mouse);

    glFlush();
    glutSwapBuffers();
}
void reshape(int w,int h)
{
    glViewport(0,0,w,h);

}

void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,800,0,650,0,1);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH |GLUT_DOUBLE);
    glutInitWindowSize(800,650);
    glutInitWindowPosition(250,40);
    glutCreateWindow("Breakout");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    glutMouseFunc(Mouse);
    glutPassiveMotionFunc(motion);
    glutMainLoop();
    return 0;
}
