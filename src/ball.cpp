#include "ball.h"
int q=0;
void ball::Ball()
{
   double a;
    float x,y;
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<=360;i++)
    {
        a=M_PI*i/180;
        x=xc+10*cos(a);
        y=yc+10*sin(a);

            glColor3f(1,1,1);
            glVertex2f(xc,yc);
            glColor3f(0,0,0.6);
            glVertex2f(x,y);
    }
    glEnd();
}
void ball::move_ball(int m)
{
    if(q==0)
    {
        yc=35;
        if(m%3!=0)
        {
            if(m<60)
                xc=60;
            else if(m>=733)
                    xc=733;
            else
                    xc=m;
        }
        Ball();
        xn=xc+11;
        yn=yc+11;
        angle=M_PI*45/180;
        xa=cos(angle);
        ya=sin(angle);
        //q=1;
    }
    else
    {
    unsigned char pixel[4];
    glReadPixels(xn, yn, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, pixel);
    if((int)pixel[0]==0&&(int)pixel[1]==0&&(int)pixel[2]==255)
    {
        q=0;
    }
    else if((int)pixel[0]==0&&(int)pixel[1]==0&&(int)pixel[2]==0)
    {


        xc=xc+1.5*xa;
        yc=yc+1.5*ya;
        xn=xc+15*xa;
        yn=yc+15*ya;

        Ball();
    }
    else
    {
         dx=xn-xc;
        dy=yn-yc;
        slop=dy/dx;
        if(slop<0)
        {
            slop=-1*slop;
        }
        angle=atan(slop);

        if(dx>0&&xn>795)
        {
            xa=-1*cos(angle);
            ya=sin(angle);
            xn=xc+15*xa;
            yn=yc+15*ya;
        }
        else if(dx<0&&yn>594)
        {

            xa=-1*cos(angle);
            ya=-1*sin(angle);
            xn=xc+15*xa;
            yn=yc+15*ya;
        }
        else if(dx<0&&xn<5)
        {

            xa=cos(angle);
            ya=-1*sin(angle);
            xn=xc+15*xa;
            yn=yc+15*ya;
        }
    }
        Ball();
    }
}
