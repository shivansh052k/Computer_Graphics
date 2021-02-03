#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1,0);
 glBegin(GL_TRIANGLES);
 glVertex2f(-0.5,-0.5);
 glVertex2f(0.5,-0.5);
 glVertex2f(0,0.5);
 glEnd();
 
 //glColor3f(0,0,1);
 //glBegin(GL_POLYGON);
 //glVertex2f(-10,-10);
 //glVertex2f(10,-10);
 //glVertex2f(10,10);
 //glVertex2f(-10,10);
 //glEnd();
   
   
 glColor3f(1,1,1);
 glRasterPos2f(-0.70,-0.70);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"SHIVANSH GUPTA");
 glFlush();
}
void onclick(int button, int state, int x, int y) {
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
glClearColor(0,0,1,1);
glutPostRedisplay();
}
}
void onclick1(char key,int x,int y)
{
if(key=='a'){
exit(1);
}
}

int main(int argc,char** argv)

{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(300,300);
 glutCreateWindow("Green Triangle"); 
 glClearColor(1,0,0,1);
//gluOrtho2D(-50,50,-40,40);
 glutDisplayFunc(display);
glutMouseFunc(onclick);
glutKeyboardFunc(onclick1);
glutMainLoop();
 return 0;
}