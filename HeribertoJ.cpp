//
//
//
//
//program: asteroids.cpp
//author:  Heriberto Jimenez
//date:    2014 - 2018
//mod spring 2015: added constructors
//mod spring 2018: X11 wrapper class
//This program is a game starting point for a 3350 project.
//

#include "fonts.h"
#include <GL/glx.h>


void showName()
{
	Rect r;
	//
	r.bot = 20;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "Heriberto Jimenez");

}

void drawBox(int x, int y)
{
	static float angle = 0.0;

//	            red grn  blu
	glColor3ub( 50, 205, 50 );
        glPushMatrix();
        glTranslatef(x, y, 0);
        glRotatef(angle, 0.0f, 0.0f, 1.0f);
        glTranslatef(-50, -50, 0);
	angle = angle + 2.5;
        glBegin(GL_QUADS);
                glVertex2i(   0, 0);
                glVertex2i(   0, 100);
                glVertex2i( 100, 100);
                glVertex2i( 100, 0);

        glEnd();
	Rect r;
	//
	r.bot = 50;
	r.left = 50;
	r.center = 1;
	ggprint8b(&r, 16, 0x00C0C0C0, "Heriberto J");
        glPopMatrix();
}
