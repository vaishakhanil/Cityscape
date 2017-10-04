#include<GL/gl.h>
#include<GL/glut.h>
#include<stdlib.h>
#include"road.h"
#include "building.h"
#include "window.h"

	GLfloat r=120.0,b=-90.0,c=20.0,q=15.0;

	//void SpecialInput();
	//void display();

	static GLfloat t[]={0.0,0.0,0.0};
	static GLint a=2;


void base2()
{
	glBegin(GL_QUADS);//background
	glColor3f(0.5,0.5,0.5);
	glVertex3f(40.0,0.0,-40.0);
	glVertex3f(40.0,0.0,40.0);
	glVertex3f(-40.0,0.0,40.0);	
	glVertex3f(-40.0,0.0,-40.0);
	glEnd();

//base-background
	glBegin(GL_QUADS);
	glColor3f(0.2,0.2,0.2);	
	glVertex3f(19.9,0.01,-19.9);
	glVertex3f(19.9,0.01,19.9);
	glVertex3f(-19.9,0.010,19.9);
	glVertex3f(-19.9,0.010,-19.9);	
	glEnd();
}


void delay()
{
int i,j;
for(i=0.0;i<999;i++)
{
for(j=0.0;j<9999;j++);
}
}

void spin()
{
GLfloat p=2.0,k=15.0;
if(a==0){

glLoadIdentity();
glRotatef(t[0],0.0,-1.0,0.0);
glRotatef(k-0.5,1.0,0.0,0.0);
glRotatef(p+1.0,0.0,0.0,1.0);
}
}

void reshape(int w,int h)
{

glViewport(0,0,w,h);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w>h)
glOrtho(-7.2*(GLfloat)w/(GLfloat)h,7.2*(GLfloat)w/(GLfloat)h,-7.2,7.2,25.0,-25.0);
else
glOrtho(-7.5,7.5,-7.5*(GLfloat)w/(GLfloat)h,7.5*(GLfloat)w/(GLfloat)h,25.0,-25.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}

void air()
{
float l=-20.0,k=5.0,o=0.0; 
while(l<20.0)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
all();
road();
base2();
window();
glColor3f(1.0,1.0,1.0);// 1
glBegin(GL_POLYGON);
glVertex3f(-8.0+l,k+2.5,1.0);
glVertex3f(-8.0+l,k+1.5,1.0);
glVertex3f(-8.0+l,k+1.5,1.5);
glVertex3f(-8.0+l,k+2.5,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);// 1 left heli
glBegin(GL_POLYGON);
glVertex3f(-1.5+l,k+1.0,1.0);
glVertex3f(-1.5+l,k+1.2,1.0);
glVertex3f(-1.8+l,k+1.4,1.0);
glVertex3f(-1.8+l,k+1.0,1.0);
glEnd();
glFlush();

glColor3f(0.3,0.3,0.3);
glBegin(GL_POLYGON);//2		
glVertex3f(-1.7+l,k+1.3,1.0);
glVertex3f(-1.7+l,k+1.6,1.0);
glVertex3f(-2.3+l,k+1.9,1.0);
glVertex3f(-2.5+l,k+1.9,1.0);
glVertex3f(-2.5+l,k+1.5,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//3
glVertex3f(-1.8+l,k+1.0,1.0);
glVertex3f(-1.8+l,k+1.5,1.0);
glVertex3f(-3.2+l,k+1.5,1.0);
glVertex3f(-3.2+l,k+1.0,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//4
glVertex3f(-2.4+l,k+1.0,1.0);
glVertex3f(-2.4+l,k+1.9,1.0);
glVertex3f(-3.0+l,k+2.2,1.0);
glVertex3f(-3.2+l,k+2.2,1.0);
glVertex3f(-3.2+l,k+1.0,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//5
glVertex3f(-3.0+l,k+1.0,1.0);
glVertex3f(-3.0+l,k+2.2,1.0);
glVertex3f(-3.8+l,k+2.2,1.0);
glVertex3f(-3.8+l,k+1.0,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//6
glVertex3f(-3.8+l,k+1.8,1.0);
glVertex3f(-3.8+l,k+2.2,1.0);
glVertex3f(-5.0+l,k+2.2,1.0);
glVertex3f(-5.0+l,k+1.8,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//7
glVertex3f(-3.8+l,k+1.8,0.6);
glVertex3f(-3.8+l,k+1.0,0.6);
glVertex3f(-5.0+l,k+1.0,0.6);
glVertex3f(-5.0+l,k+1.8,0.6);
glEnd();
glFlush();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//7:1
glVertex3f(-3.8+l,k+1.8,0.6);
glVertex3f(-3.8+l,k+1.0,0.6);
glVertex3f(-2.8+l,k+1.0,1.0);
glVertex3f(-2.8+l,k+1.8,1.0);
glEnd();
glFlush();


glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);//8
glVertex3f(-5.0+l,k+2.2,1.0);
glVertex3f(-5.4+l,k+1.8,1.0);
glVertex3f(-5.0+l,k+1.8,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//9
glVertex3f(-5.0+l,k+1.5,1.0);
glVertex3f(-5.0+l,k+1.8,1.0);
glVertex3f(-8.0+l,k+1.8,1.0);
glVertex3f(-8.0+l,k+1.5,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//10
glVertex3f(-5.0+l,k+1.0,1.0);
glVertex3f(-5.2+l,k+1.3,1.0);
glVertex3f(-8.0+l,k+1.3,1.0);
glVertex3f(-8.0+l,k+1.5,1.0);
glVertex3f(-5.0+l,k+1.5,1.0);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//10 //end left heli
glVertex3f(-7.0+l,k+1.5,1.0);
glVertex3f(-7.4+l,k+2.5,1.0);
glVertex3f(-8.0+l,k+2.5,1.0);
glVertex3f(-8.0+l,k+1.5,1.0);
glEnd();
glFlush();

//fan
glColor3f(0.9,0.9,0.9);// 1
glBegin(GL_POLYGON);
glVertex3f(-4.8+l,k+1.5,1.5);
glVertex3f(-4.8+l,k+1.5,-3.5);
glVertex3f(-4.8+l,k+1.5,-3.5);
glVertex3f(-3.5+l,k+1.5,-2.5);
glVertex3f(-3.5+l,k+1.5,1.5);
glEnd();
glFlush();

glColor3f(0.9,0.9,0.9);// 2
glBegin(GL_POLYGON);
glVertex3f(-4.8+l,k+1.5,1.5);
glVertex3f(-4.8+l,k+1.5,4.5);
glVertex3f(-4.8+l,k+1.5,4.5);
glVertex3f(-3.5+l,k+1.5,3.5);
glVertex3f(-3.5+l,k+1.5,1.5);
glEnd();
glFlush();

glColor3f(0.6,0.6,0.6);// 1
glBegin(GL_POLYGON);
glVertex3f(-4.8+l,k+1.3,1.5);
glVertex3f(-4.8+l,k+1.3,-3.5);
glVertex3f(-4.8+l,k+1.3,-3.5);
glVertex3f(-3.5+l,k+1.3,-2.5);
glVertex3f(-3.5+l,k+1.3,1.5);
glEnd();
glFlush();


glColor3f(0.6,0.6,0.6);// 2
glBegin(GL_POLYGON);
glVertex3f(-4.8+l,k+1.3,1.5);
glVertex3f(-4.8+l,k+1.3,4.5);
glVertex3f(-4.8+l,k+1.3,4.5);
glVertex3f(-3.5+l,k+1.3,3.5);
glVertex3f(-3.5+l,k+1.3,1.5);
glEnd();
glFlush();


glColor3f(1.0,1.0,1.0);// 1
glBegin(GL_POLYGON);
glVertex3f(-1.5+l,k+1.0,1.5);
glVertex3f(-1.5+l,k+1.2,1.5);
glVertex3f(-1.8+l,k+1.4,1.5);
glVertex3f(-1.8+l,k+1.0,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//2
glVertex3f(-1.7+l,k+1.3,1.5);
glVertex3f(-1.7+l,k+1.6,1.5);
glVertex3f(-2.3+l,k+1.9,1.5);
glVertex3f(-2.5+l,k+1.9,1.5);
glVertex3f(-2.5+l,k+1.5,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//3
glVertex3f(-1.8+l,k+1.0,1.5);
glVertex3f(-1.8+l,k+1.5,1.5);
glVertex3f(-3.2+l,k+1.5,1.5);
glVertex3f(-3.2+l,k+1.0,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//4
glVertex3f(-2.4+l,k+1.0,1.5);
glVertex3f(-2.4+l,k+1.9,1.5);
glVertex3f(-3.0+l,k+2.2,1.5);
glVertex3f(-3.2+l,k+2.2,1.5);
glVertex3f(-3.2+l,k+1.0,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//5
glVertex3f(-3.0+l,k+1.0,1.5);
glVertex3f(-3.0+l,k+2.2,1.5);
glVertex3f(-3.8+l,k+2.2,1.5);
glVertex3f(-3.8+l,k+1.0,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//6
glVertex3f(-3.8+l,k+1.8,1.5);
glVertex3f(-3.8+l,k+2.2,1.5);
glVertex3f(-5.0+l,k+2.2,1.5);
glVertex3f(-5.0+l,k+1.8,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//7
glVertex3f(-3.8+l,k+1.8,1.5);
glVertex3f(-3.8+l,k+1.0,1.5);
glVertex3f(-5.0+l,k+1.0,1.5);
glVertex3f(-5.0+l,k+1.8,1.5);
glEnd();
glFlush();


glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);//8
glVertex3f(-5.0+l,k+2.2,1.5);
glVertex3f(-5.4+l,k+1.8,1.5);
glVertex3f(-5.0+l,k+1.8,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//9
glVertex3f(-5.0+l,k+1.5,1.5);
glVertex3f(-5.0+l,k+1.8,1.5);
glVertex3f(-8.0+l,k+1.8,1.5);
glVertex3f(-8.0+l,k+1.5,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//10
glVertex3f(-5.0+l,k+1.0,1.5);
glVertex3f(-5.2+l,k+1.3,1.5);
glVertex3f(-8.0+l,k+1.3,1.5);
glVertex3f(-8.0+l,k+1.5,1.5);
glVertex3f(-5.0+l,k+1.5,1.5);
glEnd();
glFlush();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//10
glVertex3f(-7.0+l,k+1.5,1.5);
glVertex3f(-7.4+l,k+2.5,1.5);
glVertex3f(-8.0+l,k+2.5,1.5);
glVertex3f(-8.0+l,k+1.5,1.5);
glEnd();
glFlush();
delay();
glutSwapBuffers();
l++;
}
}

void truck()
{
float i=-40.0;
while(i<40.0)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
all();
road();
base2();
window();
glBegin(GL_QUADS);//base
glColor3f(1.0,1.0,0.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,-0.2);
glEnd();
glFlush();

glBegin(GL_QUADS);//front
glColor3f(1.0,1.0,0.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(0.5+i,0.6,0.2);
glVertex3f(0.5+i,0.6,-0.2);
glEnd();
glFlush();

glBegin(GL_QUADS);//right
glColor3f(1.0,1.0,0.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(-0.5+i,0.3,-0.2);
glVertex3f(-0.5+i,0.6,-0.2);
glVertex3f(0.5+i,0.6,-0.2);
glEnd();
glFlush();


glBegin(GL_QUADS);//left
glColor3f(1.0,1.0,0.0);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.6,0.2);
glVertex3f(0.5+i,0.6,0.2);
glEnd();
glFlush();

glBegin(GL_QUADS);//tire
glColor3f(0.0,0.0,0.0);
glVertex3f(-0.15+i,0.25,-0.22);
glVertex3f(-0.32+i,0.25,-0.22);
glVertex3f(-0.32+i,0.4,-0.22);
glVertex3f(-0.15+i,0.4,-0.22);
glEnd();
glFlush();


glBegin(GL_QUADS);//tire-2
glColor3f(0.0,0.0,0.0);
glVertex3f(0.15+i,0.25,-0.22);
glVertex3f(0.32+i,0.25,-0.22);
glVertex3f(0.32+i,0.4,-0.22);
glVertex3f(0.15+i,0.4,-0.22);
glEnd();
glFlush();



glBegin(GL_QUADS);//right window
glColor3f(0.0,0.0,0.0);
glVertex3f(0.5+i,0.45,-0.21);
glVertex3f(-0.5+i,0.45,-0.21);
glVertex3f(-0.5+i,0.55,-0.21);
glVertex3f(0.5+i,0.55,-0.21);
glEnd();
glFlush();

glBegin(GL_QUADS);//front window
glColor3f(0.0,0.0,0.0);
glVertex3f(0.51+i,0.45,-0.21);
glVertex3f(0.51+i,0.45,0.21);
glVertex3f(0.51+i,0.55,0.21);
glVertex3f(0.51+i,0.55,-0.21);
glEnd();
glFlush();
delay();	
delay();
i+=0.5;
glutSwapBuffers();
}
}



void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glRotatef(r,-1.0,0.0,1.0);
glRotatef(b,0.0,0.0,1.0);
glRotatef(c,1.0,0.0,0.0);

glRotatef(q,0.0,1.0,0.0);
all();
road();
base2();
window();
glFlush();
glutSwapBuffers();
}



void SpecialInput(int key, int x, int y)
{
float k;
switch(key)
{
case GLUT_KEY_LEFT:
{
a=0;
t[a]+=0.8;
if(t[a]>20.0) t[a]-=20.0;
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
spin();
glutPostRedisplay();
}
break;
case GLUT_KEY_DOWN:
{
air();
}
break;
case GLUT_KEY_UP:
{
truck();
}
break;
} 
}



int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("gl");
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutSpecialFunc(SpecialInput);
glEnable(GL_DEPTH_TEST);
glutMainLoop();
}
