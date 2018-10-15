#include "paddle.h"
void Paddle::body()
{
glLineWidth(1.0);
    glColor3f(0.0,0.0,0.7);
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(x,y);
    glColor3f(1,1,1);
    glVertex2d(x+100,y);
    glColor3f(0,0,0);
    glVertex2d(x+100,y+20);
    glColor3f(0,0,0);
    glVertex2d(x,y+20);
    glEnd();
glLineWidth(2.0);
    glBegin(GL_LINES);

        glColor3f(0,0,0);
        glVertex2f(x,y+5);
        glVertex2f(x+100,y+5);

        glVertex2f(x+28,y+5);
        glVertex2f(x+28,y+20);


        glVertex2f(x+72,y+5);
        glVertex2f(x+72,y+20);


        glVertex2f(x+50,y);
        glVertex2f(x+50,y+5);
    glEnd();
glLineWidth(1.0);
    double a;
    float xr,yr;
    glBegin(GL_POLYGON);
    for(int i=-90;i<=90;i++)
    {
        a=M_PI*i/180;
        xr=x+100+10*cos(a);
        yr=y+10+10*sin(a);

            glColor3f(0,0,1);

            glVertex2f(xr,yr);
    }
    glEnd();
    glBegin(GL_POLYGON);
     //glVertex2f(x+80,y+10);
    for(int i=-90;i<=90;i++)
    {
        a=M_PI*i/180;
        xr=x-10*cos(a);
        yr=y+10-10*sin(a);

      //      glColor3f(1,0,0);

            glVertex2f(xr,yr);

    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    //glColor3f(1,0,0);
    glVertex2d(x,y);
    glVertex2d(x+100,y);
    glVertex2d(x+100,y+20);
    glVertex2d(x,y+20);

    glEnd();
}
void Paddle::paddle(int m)
{
if(m%3!=0)
    {
    if(m<60)
        x=15;
    else if(m>=733)
            x=685;
    else
            x=m-50;
    }
    body();


}
