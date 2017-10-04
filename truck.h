
void truck()
{
float i=0.0;
while(i<20.0)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glBegin(GL_QUADS);//base
glColor3f(1.0,1.0,1.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,-0.2);
glEnd();


glBegin(GL_QUADS);//front
glColor3f(1.0,1.0,1.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(0.5+i,0.6,0.2);
glVertex3f(0.5+i,0.6,-0.2);
glEnd();


glBegin(GL_QUADS);//right
glColor3f(1.0,1.0,1.0);
glVertex3f(0.5+i,0.3,-0.2);
glVertex3f(-0.5+i,0.3,-0.2);
glVertex3f(-0.5+i,0.6,-0.2);
glVertex3f(0.5+i,0.6,-0.2);
glEnd();



glBegin(GL_QUADS);//right
glColor3f(1.0,1.0,1.0);
glVertex3f(0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.3,0.2);
glVertex3f(-0.5+i,0.6,0.2);
glVertex3f(0.5+i,0.6,0.2);
glEnd();

glBegin(GL_QUADS);//stripright
glColor3f(0.0,0.0,0.0);
glVertex3f(0.5+i,0.15,0.2);
glVertex3f(-0.5+i,0.15,0.2);
glVertex3f(-0.5+i,0.3,0.2);
glVertex3f(0.5+i,0.3,0.2);
glEnd();	

i+=0.5;
glutSwapBuffers();
}
}


