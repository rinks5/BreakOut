#include "game.h"

Paddle p;
ball b;
void play(int m)
{
    border();

    p.paddle(m);
     b.move_ball(m);

}
void border()
{
    glLineWidth(5.0);
    glColor3f(0.6,0.3,0.9);
    glBegin(GL_LINE_LOOP);
    glVertex2f(1,1);
    glVertex2f(1,649);
    glVertex2f(799,649);
    glVertex2f(799,1);
    glEnd();
}
