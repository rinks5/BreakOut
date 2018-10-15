#ifndef PADDLE_H
#define PADDLE_H
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include <GL/glut.h>
#include<iostream>

#include <stdlib.h>

class Paddle
{
    public:
        float x=10,y=5;
        void paddle(int );
        void body();
    protected:

    private:
};

#endif // PADDLE_H
