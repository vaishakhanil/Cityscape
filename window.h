void window()
{

/*glPointSize(10.0);
glBegin(GL_POINTS);
glColor3f(1.0,1.0,1.0);
glVertex3f(1.0,2.2,-1.5);
glEnd();
glFlush();*/
float i;
for(i=0.0;i<=1.0;i+=0.4)
{
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(1.2,2.8,1.3+i);
glVertex3f(1.2,2.5,1.3+i);
glVertex3f(1.2,2.5,1.5+i);
glVertex3f(1.2,2.8,1.5+i);
glEnd();
glFlush();
}
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,3.8,1.6);
glVertex3f(1.2,3.5,1.6);
glVertex3f(1.2,3.5,1.8);
glVertex3f(1.2,3.8,1.8);
glEnd();
glFlush();
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,3.8,2.0);
glVertex3f(1.2,3.5,2.0);
glVertex3f(1.2,3.5,2.2);
glVertex3f(1.2,3.8,2.2);
glEnd();
glFlush();
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,5.0,1.3+i);
glVertex3f(1.2,4.5,1.3+i);
glVertex3f(1.2,4.5,1.5+i);
glVertex3f(1.2,5.0,1.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.1,2.0,1.3+i);
glVertex3f(1.1,1.8,1.3+i);
glVertex3f(1.1,1.8,1.5+i);
glVertex3f(1.1,2.0,1.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.1,1.6-i,1.3+i);
glVertex3f(1.1,1.4-i,1.3+i);
glVertex3f(1.1,1.4-i,1.5+i);
glVertex3f(1.1,1.6-i,1.5+i);
glEnd();
glFlush();
}


//building 2

for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,5.0-i-0.5,-6.4+i);
glVertex3f(1.2,4.5-i-0.5,-6.4+i);
glVertex3f(1.2,4.5-i-0.5,-6.6+i);
glVertex3f(1.2,5.0-i-0.5,-6.6+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.0,2.0,-6.3+i);
glVertex3f(1.0,1.8,-6.3+i);
glVertex3f(1.0,1.8,-6.5+i);
glVertex3f(1.0,2.0,-6.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.1,1.6-i,-6.3+i);
glVertex3f(1.1,1.4-i,-6.3+i);
glVertex3f(1.1,1.4-i,-6.5+i);
glVertex3f(1.1,1.6-i,-6.5+i);
glEnd();
glFlush();
}

//building 3
float j;
for(i=0.0;i<=1.0;i+=0.4)//top
{
for(j=0.0;j<=2.0;j+=0.4)
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.0,3.0+j,-14.5+i);
glVertex3f(1.0,2.8+j,-14.5+i);
glVertex3f(1.0,2.8+j,-14.6+i);
glVertex3f(1.0,3.0+j,-14.6+i);
glEnd();
glFlush();
}
}

//building 4
for(i=0.0;i<=1.0;i+=0.4)
{
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(1.2,2.8,9.3+i);
glVertex3f(1.2,2.5,9.3+i);
glVertex3f(1.2,2.5,9.5+i);
glVertex3f(1.2,2.8,9.5+i);
glEnd();
glFlush();
}
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,3.8,9.6);
glVertex3f(1.2,3.5,9.6);
glVertex3f(1.2,3.5,9.8);
glVertex3f(1.2,3.8,9.8);
glEnd();
glFlush();
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,3.8,9.0);
glVertex3f(1.2,3.5,9.0);
glVertex3f(1.2,3.5,9.2);
glVertex3f(1.2,3.8,9.2);
glEnd();
glFlush();
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.2,5.0,9.3+i);
glVertex3f(1.2,4.5,9.3+i);
glVertex3f(1.2,4.5,9.5+i);
glVertex3f(1.2,5.0,9.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.1,2.0,9.3+i);
glVertex3f(1.1,1.8,9.3+i);
glVertex3f(1.1,1.8,9.5+i);
glVertex3f(1.1,2.0,9.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(1.1,1.6-i,9.3+i);
glVertex3f(1.1,1.4-i,9.3+i);
glVertex3f(1.1,1.4-i,9.5+i);
glVertex3f(1.1,1.6-i,9.5+i);
glEnd();
glFlush();
}

//building 5

for(i=0.0;i<=1.0;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(9.2,5.0-i-0.5,-6.4+i);
glVertex3f(9.2,4.5-i-0.5,-6.4+i);
glVertex3f(9.2,4.5-i-0.5,-6.6+i);
glVertex3f(9.2,5.0-i-0.5,-6.6+i);
glEnd();
glFlush();
}
for(i=0.0;i<=0.8;i+=0.4)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(9.0,2.0,-6.3+i);
glVertex3f(9.0,1.8,-6.3+i);
glVertex3f(9.0,1.8,-6.5+i);
glVertex3f(9.0,2.0,-6.5+i);
glEnd();
glFlush();
}
for(i=0.0;i<=0.5;i+=0.8)//top
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex3f(9.1,1.6,-6.3+i);
glVertex3f(9.1,1.4,-6.3+i);
glVertex3f(9.1,1.4,-6.5+i);
glVertex3f(9.1,1.6,-6.5+i);
glEnd();
glFlush();
}


//building front
float k;
for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=2.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-6.8,2.8+k,1.3+i);
glVertex3f(-6.8,2.5+k,1.3+i);
glVertex3f(-6.8,2.5+k,1.5+i);
glVertex3f(-6.8,2.8+k,1.5+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=4.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-3.0,0.8+k,1.3+i);
glVertex3f(-3.0,0.5+k,1.3+i);
glVertex3f(-3.0,0.5+k,1.5+i);
glVertex3f(-3.0,0.8+k,1.5+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=4.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-3.0,0.8+k,-6.3+i);
glVertex3f(-3.0,0.5+k,-6.3+i);
glVertex3f(-3.0,0.5+k,-6.5+i);
glVertex3f(-3.0,0.8+k,-6.5+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=4.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-3.0,0.8+k,-14.3+i);
glVertex3f(-3.0,0.5+k,-14.3+i);
glVertex3f(-3.0,0.5+k,-14.5+i);
glVertex3f(-3.0,0.8+k,-14.5+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=4.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-3.0,0.8+k,9.3+i);
glVertex3f(-3.0,0.5+k,9.3+i);
glVertex3f(-3.0,0.5+k,9.5+i);
glVertex3f(-3.0,0.8+k,9.5+i);
glEnd();
glFlush();
}
}
for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=2.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-14.8,2.8+k,1.3+i);
glVertex3f(-14.8,2.5+k,1.3+i);
glVertex3f(-14.8,2.5+k,1.5+i);
glVertex3f(-14.8,2.8+k,1.5+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=2.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-6.8,2.8+k,-6.4+i);
glVertex3f(-6.8,2.5+k,-6.4+i);
glVertex3f(-6.8,2.5+k,-6.6+i);
glVertex3f(-6.8,2.8+k,-6.6+i);
glEnd();
glFlush();
}
}

for(i=0.0;i<=1.0;i+=0.4)
{
for(k=0.0;k<=2.0;k+=0.8){
glColor3f(1.0,1.0,1.0);//bottom
glBegin(GL_QUADS);
glVertex3f(-6.8,2.8+k,9.4+i);
glVertex3f(-6.8,2.5+k,9.4+i);
glVertex3f(-6.8,2.5+k,9.6+i);
glVertex3f(-6.8,2.8+k,9.6+i);
glEnd();
glFlush();
}
}

















}
