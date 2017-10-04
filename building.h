void base()
{
//-+-
float i=-10.0,j,k;
do{
for(j=-10.0;j<12.0;j=j+4.0){
for(k=-10.0;k<12.0;k=k+4.0){

glBegin(GL_QUADS);//t-side
glColor3f(0.3,0.3,0.3);
glVertex3f(-1.0-i-k,0.3,-1.0-i-j);
glVertex3f(-3.0-i-k,0.3,-1.0-i-j);
glVertex3f(-3.0-i-k,0.3,-3.0-i-j);
glVertex3f(-1.0-i-k,0.3,-3.0-i-j);
glEnd();
glFlush();

glBegin(GL_QUADS);//bottom-side
glColor3f(0.3,0.3,0.3);
glVertex3f(-1.0-i-k,0.1,-1.0-i-j);
glVertex3f(-3.0-i-k,0.1,-1.0-i-j);
glVertex3f(-3.0-i-k,0.1,-3.0-i-j);
glVertex3f(-1.0-i-k,0.1,-3.0-i-j);
glEnd();
glFlush();

glBegin(GL_QUADS);//f-side
glColor3f(0.4,0.4,0.4);
glVertex3f(-3.0-i-k,0.1,-1.0-i-j);
glVertex3f(-3.0-i-k,0.1,-3.0-i-j);
glVertex3f(-3.0-i-k,0.3,-3.0-i-j);
glVertex3f(-3.0-i-k,0.3,-1.0-i-j);
glEnd();
glFlush();

glBegin(GL_QUADS);//r-side
glColor3f(0.4,0.4,0.4);
glVertex3f(-3.0-i-k,0.3,-3.0-i-j);
glVertex3f(-3.0-i-k,0.1,-3.0-i-j);
glVertex3f(-1.0-i-k,0.1,-3.0-i-j);
glVertex3f(-1.0-i-k,0.3,-3.0-i-j);
glEnd();
glFlush();

glBegin(GL_QUADS);//l-side
glColor3f(0.4,0.4,0.4);
glVertex3f(-3.0-i-k,0.3,-1.0-i-j);
glVertex3f(-3.0-i-k,0.1,-1.0-i-j);
glVertex3f(-1.0-i-k,0.1,-1.0-i-j);
glVertex3f(-1.0-i-k,0.3,-1.0-i-j);
glEnd();
glFlush();

glBegin(GL_QUADS);//b-side
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.0-i-k,0.1,-1.0-i-j);
glVertex3f(-1.0-i-k,0.1,-3.0-i-j);
glVertex3f(-1.0-i-k,0.3,-3.0-i-j);
glVertex3f(-1.0-i-k,0.3,-1.0-i-j);
glEnd();
glFlush();
}
}
i=i+4;
}
while(i<12);
}


void build1(){
float i=-10.0,j,k;
do{
for(j=-10.0;j<15.0;j=j+8.0){
for(k=-10.0;k<15.0;k=k+8.0){

glBegin(GL_QUADS);//base
glColor3f(0.2,0.2,0.2);
glVertex3f(-1.22-i-k,2.0,-1.22-i-j);
glVertex3f(-2.82-i-k,2.0,-1.22-i-j);
glVertex3f(-2.82-i-k,2.0,-2.82-i-j);
glVertex3f(-1.22-i-k,2.0,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//base2
glColor3f(0.2,0.2,0.2);
glVertex3f(-1.22-i-k,2.2,-1.22-i-j);
glVertex3f(-2.82-i-k,2.2,-1.22-i-j);
glVertex3f(-2.82-i-k,2.2,-2.82-i-j);
glVertex3f(-1.22-i-k,2.2,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//base2right
glColor3f(0.1,0.1,0.1);
glVertex3f(-1.22-i-k,2.0,-2.82-i-j);
glVertex3f(-1.22-i-k,2.2,-2.82-i-j);
glVertex3f(-2.82-i-k,2.2,-2.82-i-j);
glVertex3f(-2.82-i-k,2.0,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//base2left
glColor3f(0.1,0.1,0.1);
glVertex3f(-2.82-i-k,2.0,-1.22-i-j);
glVertex3f(-2.82-i-k,2.2,-1.22-i-j);
glVertex3f(-2.82-i-k,2.2,-2.82-i-j);
glVertex3f(-2.82-i-k,2.0,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//base2back
glColor3f(0.1,0.1,0.1);
glVertex3f(-1.22-i-k,2.0,-1.22-i-j);
glVertex3f(-1.22-i-k,2.2,-1.22-i-j);
glVertex3f(-1.22-i-k,2.2,-2.82-i-j);
glVertex3f(-1.22-i-k,2.0,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//base2front
glColor3f(0.1,0.1,0.1);
glVertex3f(-2.82-i-k,2.2,-2.82-i-j);
glVertex3f(-2.82-i-k,2.2,-1.22-i-j);
glVertex3f(-2.82-i-k,2.0,-1.22-i-j);
glVertex3f(-2.82-i-k,2.0,-2.82-i-j);
glEnd();

glBegin(GL_QUADS);//back
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2-i-k,0.3,-1.2-i-j);
glVertex3f(-1.2-i-k,0.3,-2.8-i-j);
glVertex3f(-1.2-i-k,2.0,-2.8-i-j);
glVertex3f(-1.2-i-k,2.0,-1.2-i-j);
glEnd();

glBegin(GL_QUADS);//left
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2-i-k,0.3,-1.2-i-j);
glVertex3f(-2.8-i-k,0.3,-1.2-i-j);
glVertex3f(-2.8-i-k,2.0,-1.2-i-j);
glVertex3f(-1.2-i-k,2.0,-1.2-i-j);
glEnd();

glBegin(GL_QUADS);//right
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2-i-k,0.3,-2.8-i-j);
glVertex3f(-2.8-i-k,0.3,-2.8-i-j);
glVertex3f(-2.8-i-k,2.0,-2.8-i-j);
glVertex3f(-1.2-i-k,2.0,-2.8-i-j);
glEnd();

glBegin(GL_QUADS);//front
glColor3f(0.4,0.4,0.4);
glVertex3f(-2.8-i-k,0.3,-1.2-i-j);
glVertex3f(-2.8-i-k,0.3,-2.8-i-j);
glVertex3f(-2.8-i-k,2.0,-2.8-i-j);
glVertex3f(-2.8-i-k,2.0,-1.2-i-j);
glEnd();

//middle
glBegin(GL_QUADS);//base2
glColor3f(0.2,0.2,0.2);
glVertex3f(-1.4-i-k,2.2,-1.4-i-j);
glVertex3f(-2.6-i-k,2.2,-1.4-i-j);
glVertex3f(-2.6-i-k,2.2,-2.6-i-j);
glVertex3f(-1.4-i-k,2.2,-2.6-i-j);
glEnd();

glBegin(GL_QUADS);//base2exe
glColor3f(0.2,0.2,0.2);
glVertex3f(-1.4-i-k,5.0,-1.4-i-j);
glVertex3f(-2.6-i-k,5.0,-1.4-i-j);
glVertex3f(-2.6-i-k,5.0,-2.6-i-j);
glVertex3f(-1.4-i-k,5.0,-2.6-i-j);
glEnd();

glBegin(GL_QUADS);//front2
glColor3f(0.4,0.4,0.4);
glVertex3f(-2.6-i-k,2.0,-1.4-i-j);
glVertex3f(-2.6-i-k,2.0,-2.6-i-j);
glVertex3f(-2.6-i-k,5.0,-2.6-i-j);
glVertex3f(-2.6-i-k,5.0,-1.4-i-j);
glEnd();

glBegin(GL_QUADS);//right2
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.4-i-k,2.0,-2.6-i-j);
glVertex3f(-2.6-i-k,2.0,-2.6-i-j);
glVertex3f(-2.6-i-k,5.0,-2.6-i-j);
glVertex3f(-1.4-i-k,5.0,-2.6-i-j);
glEnd();

glBegin(GL_QUADS);//left2
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.4-i-k,2.0,-1.4-i-j);
glVertex3f(-2.6-i-k,2.0,-1.4-i-j);
glVertex3f(-2.6-i-k,5.0,-1.4-i-j);
glVertex3f(-1.4-i-k,5.0,-1.4-i-j);
glEnd();

glBegin(GL_QUADS);//back
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.4-i-k,2.0,-1.4-i-j);
glVertex3f(-1.4-i-k,2.0,-2.6-i-j);
glVertex3f(-1.4-i-k,5.0,-2.6-i-j);
glVertex3f(-1.4-i-k,5.0,-1.4-i-j);
glEnd();

//top
glBegin(GL_QUADS);//base3
glColor3f(0.1,0.1,0.1);
glVertex3f(-1.6-i-k,6.0,-1.6-i-j);
glVertex3f(-2.4-i-k,6.0,-1.8-i-j);
glVertex3f(-2.4-i-k,6.0,-2.2-i-j);
glVertex3f(-1.6-i-k,6.0,-2.4-i-j);
glEnd();


glBegin(GL_QUADS);//front3
glColor3f(0.25,0.25,0.25);
glVertex3f(-2.4-i-k,6.0,-1.8-i-j);
glColor3f(0.28,0.28,0.28);
glVertex3f(-2.6-i-k,5.0,-1.4-i-j);
glColor3f(0.28,0.28,0.28);
glVertex3f(-2.6-i-k,5.0,-2.6-i-j);
glColor3f(0.25,0.25,0.25);
glVertex3f(-2.4-i-k,6.0,-2.2-i-j);
glEnd();


glBegin(GL_QUADS);//right3
glColor3f(0.3,0.3,0.3);
glVertex3f(-2.4-i-k,6.0,-2.2-i-j);
glVertex3f(-2.6-i-k,5.0,-2.6-i-j);
glVertex3f(-1.4-i-k,5.0,-2.6-i-j);
glVertex3f(-1.6-i-k,6.0,-2.4-i-j);
glEnd();

glBegin(GL_QUADS);//left3
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.6-i-k,2.0,-1.6-i-j);
glVertex3f(-1.4-i-k,2.0,-1.4-i-j);
glVertex3f(-2.6-i-k,5.0,-1.4-i-j);
glVertex3f(-2.4-i-k,5.0,-1.6-i-j);
glEnd();

}
}
i=i+8;
}
while(i<15);

}


void build2()
{
float l,n=1.9;
for(l=-10.0;l<15.0;l=l+8.0){
glBegin(GL_QUADS);//base
glColor3f(0.2,0.2,0.2);
glVertex3f(-1.22,5.0,-5.22+l+n);
glVertex3f(-2.82,5.0,-5.22+l+n);
glVertex3f(-2.82,5.0,-6.82+l+n);
glVertex3f(-1.22,5.0,-6.82+l+n);
glEnd();

glBegin(GL_QUADS);//base2
glColor3f(0.3,0.3,0.3);
glVertex3f(-1.22,5.2,-5.22+l+n);
glVertex3f(-2.82,5.2,-5.22+l+n);
glVertex3f(-2.82,5.2,-6.82+l+n);
glVertex3f(-1.22,5.2,-6.82+l+n);
glEnd();



glBegin(GL_QUADS);//back
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2,0.1,-5.2+l+n);
glVertex3f(-1.2,0.1,-6.8+l+n);
glVertex3f(-1.2,5.0,-6.8+l+n);
glVertex3f(-1.2,5.0,-5.2+l+n);
glEnd();

glBegin(GL_QUADS);//left
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2,0.3,-5.2+l+n);
glVertex3f(-2.8,0.3,-5.2+l+n);
glVertex3f(-2.8,5.0,-5.2+l+n);
glVertex3f(-1.2,5.0,-5.2+l+n);
glEnd();

glBegin(GL_QUADS);//right
glColor3f(0.4,0.4,0.4);
glVertex3f(-1.2,0.1,-6.8+l+n);
glVertex3f(-2.8,0.1,-6.8+l+n);
glVertex3f(-2.8,5.0,-6.8+l+n);
glVertex3f(-1.2,5.0,-6.8+l+n);
glEnd();

glBegin(GL_QUADS);//front
glColor3f(0.4,0.4,0.4);
glVertex3f(-2.8,0.1,-5.2+l+n);
glVertex3f(-2.8,0.1,-6.8+l+n);
glVertex3f(-2.8,5.0,-6.8+l+n);
glVertex3f(-2.8,5.0,-5.2+l+n);
glEnd();


glBegin(GL_QUADS);//base2right
glColor3f(0.3,0.3,0.3);
glVertex3f(-1.22,5.0,-6.82+l+n);
glVertex3f(-1.22,5.2,-6.82+l+n);
glVertex3f(-2.82,5.2,-6.82+l+n);
glVertex3f(-2.82,5.0,-6.82+l+n);
glEnd();

glBegin(GL_QUADS);//base2back
glColor3f(0.3,0.3,0.3);
glVertex3f(-1.22,5.0,-5.22+l+n);
glVertex3f(-1.22,5.2,-5.22+l+n);
glVertex3f(-1.22,5.2,-6.82+l+n);
glVertex3f(-1.22,5.0,-6.82+l+n);
glEnd();

glBegin(GL_QUADS);//base2front
glColor3f(0.2,0.2,0.2);
glVertex3f(-2.82,5.2,-6.82+l+n);
glVertex3f(-2.82,5.2,-5.22+l+n);
glVertex3f(-2.82,5.0,-5.22+l+n);
glVertex3f(-2.82,5.0,-6.82+l+n);
glEnd();
}
}


void build5()
{
float i=0.0;
do{
glBegin(GL_QUADS);//base2front
glColor3f(0.1,0.1,0.1);
glVertex3f(-6.2+i,3.0,-2.8);
glVertex3f(-6.2+i,3.0,-1.2);
glVertex3f(-6.9+i,3.0,-1.2);
glVertex3f(-6.9+i,3.0,-2.8);
glEnd();

glBegin(GL_QUADS);//basez
glColor3f(0.3,0.3,0.3);
glVertex3f(-6.9+i,3.0,-1.2);
glVertex3f(-6.2+i,3.0,-1.2);
glVertex3f(-6.2+i,0.0,-1.2);
glVertex3f(-6.9+i,0.0,-1.2);
glEnd();
glFlush();
glBegin(GL_QUADS);//basez
glColor3f(0.3,0.3,0.3);
glVertex3f(-6.9+i,3.0,-2.8);
glVertex3f(-6.2+i,3.0,-2.8);
glVertex3f(-6.2+i,0.0,-2.8);
glVertex3f(-6.9+i,0.0,-2.8);
glEnd();
glFlush();


glBegin(GL_QUADS);//baseback
glColor3f(0.4,0.4,0.4);
glVertex3f(-6.2+i,3.0,-2.8);
glVertex3f(-6.2+i,3.0,-1.2);
glVertex3f(-6.2+i,0.0,-1.2);
glVertex3f(-6.2+i,0.0,-2.8);
glEnd();
glFlush();

glBegin(GL_QUADS);//basefront
glColor3f(0.4,0.4,0.4);
glVertex3f(-6.9+i,3.0,-2.8);
glVertex3f(-6.9+i,3.0,-1.2);
glVertex3f(-6.9+i,0.0,-1.2);
glVertex3f(-6.9+i,0.0,-2.8);
glEnd();
glFlush();
i=i+8.0;
}
while(i<20.0);

}

void build3()
{
/*glBegin(GL_QUADS);//basetop
glColor3f(0.6,0.6,0.6);
glVertex3f(-5.5,3.0,5.0);
glVertex3f(-5.5,3.0,6.8);
glVertex3f(-6.5,3.0,6.8);
glVertex3f(-6.5,3.0,5.0);
glEnd();
glFlush();



glBegin(GL_QUADS);//basefront
glColor3f(0.4,0.4,0.4);
glVertex3f(-6.5,3.0,5.0);
glVertex3f(-6.5,3.0,6.8);
glVertex3f(-6.5,0.2,6.8);
glVertex3f(-6.5,0.2,5.0);
glEnd();
glFlush();

glBegin(GL_QUADS);//base2
glColor3f(0.2,0.2,0.2);
glVertex3f(-7.0,2.0,4.8);
glVertex3f(-7.0,2.0,6.5);
glVertex3f(-7.3,2.0,6.5);
glVertex3f(-7.3,2.0,4.8);
glEnd();
glFlush();

glBegin(GL_QUADS);//basefront
glColor3f(0.4,0.4,0.4);
glVertex3f(-7.3,2.0,4.8);
glVertex3f(-7.3,2.0,6.5);
glVertex3f(-7.3,0.2,6.5);
glVertex3f(-7.3,0.2,4.8);
glEnd();
glFlush();

glBegin(GL_QUADS);//side
glColor3f(0.4,0.4,0.4);
glVertex3f(-7.0,2.0,4.8);
glVertex3f(-7.3,0.2,4.8);
glVertex3f(-7.3,2.0,4.8);
glVertex3f(-7.0,0.2,4.8);
glEnd();
glFlush();*/



}






void all()
{
base();
build1();
build2();
build3();
build5();
}
