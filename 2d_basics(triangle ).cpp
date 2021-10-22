/* create a green coloured triangle using GL,GLUT, GLUT header files*/
#include<GL/glut.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
char title[] = "traingle";
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor4f(0, 1, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glColor3f(1, 1, 1);
	glRasterPos2f(-0.22, 0.65);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"Colored Triangle");
	glColor3f(1, 1, 1);
	glRasterPos2f(-0.47, -0.65);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"Shlok Mohanty 500076333 R171219034");
	glFlush();

}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	int mode = GLUT_RGB | GLUT_SINGLE;
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(50, 50);
	glutCreateWindow(title);
	glutDisplayFunc(display);
	glutMainLoop();
	return();
}
