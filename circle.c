#include<math.h>
#include<GL/glut.h>
#include<GL/gl.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,1.0,0.0);
glBegin(GL_POINTS);
for(int i=0;i<1000;++i)
{	
glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
}
glEnd();
glFlush();
}
int main(int argc, char *argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(500,500);
glutCreateWindow("Circle 49");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
