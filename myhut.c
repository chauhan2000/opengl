#include <GL/glut.h>
#include <stdio.h>
void display(void)
{
glClear( GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(2.0, 2.0, 0.0);
glVertex3f(7.0, 2.0, 0.0);
glVertex3f(7.0, 5.0, 0.0);
glVertex3f(2.0, 5.0, 0.0);
glEnd();

glColor3f(0.0, 0.5, 0.0);
glBegin(GL_POLYGON);
glVertex3f(6.5, 4.0, 0.0);
glVertex3f(5.0, 4.0, 0.0);
glVertex3f(5.0, 2.0, 0.0);
glVertex3f(6.5, 2.0, 0.0);
glEnd();

glColor3f(0.5, 0.5, 0.5);
glBegin(GL_POLYGON);
glVertex3f(5.0, 4.0, 0.0);
glVertex3f(5.0, 3.0, 0.0);
glVertex3f(6.5, 4.0, 0.0);
glVertex3f(6.5, 3.0, 0.0);
glEnd();


glColor3f(1.0, 0.5, 0.0);
glBegin(GL_POLYGON);
glVertex3f(2.0, 2.0, 0.0);
glVertex3f(2.0, 5.0, 0.0);
glVertex3f(3.0, 2.0, 0.0);
glVertex3f(3.0, 5.0, 0.0);
glEnd();


glColor3f(1.0, 0.5, 0.0);
glBegin(GL_POLYGON);
glVertex3f(1.0, 5.0, 0.0);
glVertex3f(4.0, 7.0, 0.0);
glVertex3f(8.0, 5.0, 0.0);
glVertex3f(4.0, 6.0, 0.0);
glEnd();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(600,650);
glutCreateWindow ("Rachit Hut Roll no 49");
glClearColor(0.5, 1.0, 1.0, 0.5);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
