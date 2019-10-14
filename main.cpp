#include <windows.h>
#include <GL/glut.h>

void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
// Quads for second white line
glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f( 8.0,2.0);
glVertex2f( 8.0,1.3);
glVertex2f(-4.5,-4.11);
glVertex2f(-6.3,-4.11);

//Quads for first white line
glBegin(GL_QUADS);
glVertex2f(-8.0,-2.0);
glVertex2f(-8.0,-1.4);
glVertex2f(4.7,4.11);
glVertex2f(6.2,4.11);
glEnd();
glFlush();
//First triangle
glBegin(GL_TRIANGLES);
glColor3f(0,1,0);
glVertex2f(4.8,4.11);
glVertex2f(-8.0,4.11);
glVertex2f(-8.0,-1.4);


//second triangle
glColor3f(1, 0, 0);
glBegin(GL_TRIANGLES);
glVertex2f(-4.5,-4.11);
glVertex2f(8.0,-4.11);
glVertex2f( 8.0,1.3);
glEnd();
glFlush();
//polygon for black part in the middle
glBegin(GL_POLYGON);
glColor3f(0, 0, 0);
glVertex2f( 8.0,2.0);

glVertex2f(8.0,4.12);
glVertex2f(6.2,4.12);
glVertex2f(-8.0,-2.0);
glVertex2f(-8.0,-4.12);
glVertex2f(-6.0,-4.12);
glEnd();
glFlush();
//polygon for the first star
glColor3f(1,1,1);
glLineWidth(1);
glBegin(GL_POLYGON);
glVertex2f(-4.3,-1.3);
glVertex2f(-5.0,-1.3);
glVertex2f(-4.3,-1.9);
glVertex2f(-4.7,-2.6);
glVertex2f(-3.9,-2.0);
glVertex2f(-3.2,-2.6);
glVertex2f(-3.4,-1.8);
glVertex2f(-2.9,-1.3);
glVertex2f(-3.55,-1.3);
glVertex2f(-3.95,-.6);
glEnd();
glFlush();
//polygon for the second star
glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);

glVertex2f(3.4,2.0);
glVertex2f(2.8,2.0);
glVertex2f(3.5,1.3);
glVertex2f(3.0,0.7);
glVertex2f(3.8,1.3);
glVertex2f(4.5,0.7);
glVertex2f(4.3,1.5);
glVertex2f(4.8,2.0);
glVertex2f(4.2,2.0);
glVertex2f(3.8,2.7);
glEnd();
glFlush();



}
void Initialize()
{
glClearColor(.5, .5, .5, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);glVertex2f(-4.0,-1.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(476, 477);
glutInitWindowPosition(200, 200);
glutCreateWindow("KhNishad");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
