void road()
{
//glTranslatef(0.0,0.0,-1.5);
glColor3f(0.1,0.1,0.1);

glBegin(GL_QUADS);//road
glVertex3f(35.8,0.03,-0.25);
glVertex3f(-35.8,0.03,-0.25);
glVertex3f(-35.8,0.03,0.5);
glVertex3f(35.8,0.03,0.5);
glEnd();
glFlush();
glColor3f(0.5,0.5,0.5);//sidewalk
glBegin(GL_QUADS);
glVertex3f(35.8,0.02,-0.35);
glVertex3f(-35.8,0.02,-0.35);
glVertex3f(-35.8,0.02,0.6);
glVertex3f(35.8,0.02,0.6);
glEnd();
glFlush();

//cross-road
//glTranslatef(-1.5,0.0,0.0);
glColor3f(0.1,0.1,0.1);

glBegin(GL_QUADS);//road
glVertex3f(-0.25,0.03,40.8);
glVertex3f(-0.25,0.03,-40.8);
glVertex3f(0.5,0.03,-40.8);
glVertex3f(0.5,0.03,40.8);
glEnd();
glFlush();
glColor3f(0.5,0.5,0.5);//sidewalk
glBegin(GL_QUADS);
glVertex3f(-0.35,0.02,40.8);
glVertex3f(-0.35,0.02,-40.8);
glVertex3f(0.6,0.02,-40.8);
glVertex3f(0.6,0.02,40.8);
glEnd();
glFlush();





}

