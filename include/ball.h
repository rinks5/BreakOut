#ifndef BALL_H
#define BALL_H


#include<stdio.h>
#include<math.h>
#include<windows.h>
#include <GL/glut.h>
#include<iostream>
#include <stdlib.h>

class ball
{
    public:
        float xc=60,yc=35;
        float xn,yn,xa,ya;
        double angle;
        float dx,dy,slop;
        void Ball();
        void move_ball(int );
};

#endif // BALL_H
