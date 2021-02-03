#include <GL/glut.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1,0,0);
 glPointSize(5.0);
 glBegin(GL_POINTS);
 glVertex2f(-0.9,0.9);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(-0.94,0.8);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Point");
 
 glColor3f(1,0,0);
 glBegin(GL_LINES);
 glVertex2f(-0.8,0.9);
 glVertex2f(-0.6,0.9);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(-0.70,0.8);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Line");
 
 glColor3f(1,0,0);
 glBegin(GL_LINE_STRIP);
 glVertex2f(-0.5,0.9);
 glVertex2f(-0.3,0.9);
 glVertex2f(-0.5,0.8);
 glVertex2f(-0.3,0.8);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(-0.5,0.70);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Line Strip");
   
   
 glColor3f(1,0,0);
 glBegin(GL_LINE_LOOP);
 glVertex2f(-0.2,0.9);
 glVertex2f(0,0.9);
 glVertex2f(-0.2,0.8);
 glVertex2f(0,0.8);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(-0.20,0.70);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Line Loop");
 
 glColor3f(1,0,0);
 glBegin(GL_POLYGON);
 glVertex2f(0.1,0.9);
 glVertex2f(0.2,0.9);
 glVertex2f(0.3,0.7);
 glVertex2f(0.3,0.5);
 glVertex2f(0.2,0.3);
 glVertex2f(0.1,0.3);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(0.10,0.20);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Polygon");
 
 glColor3f(0,0,0.3);
 glBegin(GL_QUADS);
 glVertex2f(0.5,0.9);
 glVertex2f(0.6,0.9);
 glVertex2f(0.7,0.7);
 glVertex2f(0.4,0.7);
 glEnd();
 glColor3f(0,0,0.3);
 glRasterPos2f(0.50,0.60);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Quad");
 
 glColor3f(1,0,0);
 glBegin(GL_QUAD_STRIP);
 glVertex2f(-0.9,-0.1);
 glVertex2f(-0.8,-0.1);
 glVertex2f(-1.0,-0.2);
 glVertex2f(-0.7,-0.2);
 glColor3f(0,1,0);
 glVertex2f(-0.9,-0.3);
 glVertex2f(-0.8,-0.3);
 glColor3f(0,0,1);
 glVertex2f(-1.0,-0.4);
 glVertex2f(-0.7,-0.4);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(-0.97,-0.50);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Quad Strip");
 
 glColor3f(0.8,0,0);
 glBegin(GL_TRIANGLES);
 glVertex2f(-0.6,-0.5);
 glVertex2f(-0.2,-0.5);
 glVertex2f(-0.4,-0.1);
 glEnd();
 glColor3f(0.8,0,0);
 glRasterPos2f(-0.50,-0.60);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Triangle");
 
 glColor3f(0,0,0);
 glBegin(GL_TRIANGLE_STRIP);
 glVertex2f(-0.1,0);
 glVertex2f(0.1,0);
 glVertex2f(-0.1,-0.3);
 glColor3f(0.8,0,0);
 glVertex2f(0.2,-0.3);
 glColor3f(0,0.8,0);
 glVertex2f(-0.1,-0.6);
 glColor3f(0,0,0.5);
 glVertex2f(0.3,-0.6);
 glEnd();
 glColor3f(1,0,0);
 glRasterPos2f(0.0,-0.70);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Triangle Strip");
 
 glColor3f(1,0,0);
 glBegin(GL_TRIANGLE_FAN);
 glVertex2f(0.6,-0.1);
 glVertex2f(0.8,0.1);
 glVertex2f(0.8,-0.1);
 glColor3f(0,1,0);
 glVertex2f(0.8,-0.3);
 glColor3f(1,0,0);
 glVertex2f(0.6,-0.3);
 glColor3f(0,1,0);
 glVertex2f(0.4,-0.3);
 glColor3f(1,0,0);
 glVertex2f(0.4,-0.1);
 glColor3f(0,1,0);
 glVertex2f(0.4,0.1);
 glColor3f(1,0,0);
 glVertex2f(0.6,0.1);
 glColor3f(0,1,0);
 glVertex2f(0.8,0.1);
 glEnd();
 glColor3f(0,0,1);
 glRasterPos2f(0.50,-0.4);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Triangle Fan");
 
 glColor3f(1,0,0);
 glRasterPos2f(0.80,-0.70);
 glutBitmapString(GLUT_BITMAP_HELVETICA_18,"Shivansh\nGupta");
 glFlush();
}

int main(int argc,char** argv)

{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1080,900);
 glutInitWindowPosition(0,0);
 glutCreateWindow("PRIMITIVE SHAPES"); 
 glClearColor(1,1,1,1);
//gluOrtho2D(-50,50,-40,40);
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}