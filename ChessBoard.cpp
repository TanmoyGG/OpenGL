#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
  glPointSize(5.0);
  glClearColor(1.0f, 1.0f, 1.0f,
               1.0f); // Set background color to black and opaque

  glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

  // 1st box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-80, 100);
  glVertex2f(-40, 100);
  glVertex2f(-40, 60);
  glVertex2f(-80, 60);

  glEnd();

  // 2nd box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(-40, 100);
  glVertex2f(0, 100);
  glVertex2f(0, 60);
  glVertex2f(-40, 60);

  glEnd();

  // 3rd box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-0, 100);
  glVertex2f(40, 100);
  glVertex2f(40, 60);
  glVertex2f(0, 60);

  glEnd();

  // 4th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(40, 100);
  glVertex2f(80, 100);
  glVertex2f(80, 60);
  glVertex2f(40, 60);

  glEnd();

  // 5th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(-80, 60);
  glVertex2f(-40, 60);
  glVertex2f(-40, 20);
  glVertex2f(-80, 20);

  glEnd();

  // 6th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-40, 60);
  glVertex2f(0, 60);
  glVertex2f(0, 20);
  glVertex2f(-40, 20);

  glEnd();

  // 7th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(0, 60);
  glVertex2f(40, 60);
  glVertex2f(40, 20);
  glVertex2f(0, 20);

  glEnd();

  // 8th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(40, 60);
  glVertex2f(80, 60);
  glVertex2f(80, 20);
  glVertex2f(40, 20);

  glEnd();

  // 9th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-80, 20);
  glVertex2f(-40, 20);
  glVertex2f(-40, -20);
  glVertex2f(-80, -20);

  glEnd();

  // 10th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(-40, 20);
  glVertex2f(0, 20);
  glVertex2f(0, -20);
  glVertex2f(-40, -20);

  glEnd();

  // 11th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(0, 20);
  glVertex2f(40, 20);
  glVertex2f(40, -20);
  glVertex2f(0, -20);

  glEnd();

  // 12th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(40, 20);
  glVertex2f(80, 20);
  glVertex2f(80, -20);
  glVertex2f(40, -20);

  glEnd();

  // 13th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(-80, -20);
  glVertex2f(-40, -20);
  glVertex2f(-40, -60);
  glVertex2f(-80, -60);

  glEnd();

  // 14th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-40, -20);
  glVertex2f(0, -20);
  glVertex2f(0, -60);
  glVertex2f(-40, -60);

  glEnd();

  // 15th box
  glBegin(GL_POLYGON);

  glColor3ub(255, 255, 255);
  glVertex2f(0, -20);
  glVertex2f(40, -20);
  glVertex2f(40, -60);
  glVertex2f(0, -60);

  glEnd();

  // 16th box
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(40, -20);
  glVertex2f(80, -20);
  glVertex2f(80, -60);
  glVertex2f(40, -60);

  glEnd();

  // Border around the checkerboard
  glColor3ub(0, 0, 0); // Set border color to black
  glLineWidth(3.0);    // Set line width for the border
  glBegin(GL_LINE_LOOP);
  glVertex2f(-80, 100); // Top-left corner
  glVertex2f(80, 100);  // Top-right corner
  glVertex2f(80, -60);  // Bottom-right corner
  glVertex2f(-80, -60); // Bottom-left corner
  glEnd();

  glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char **argv) {

  glutInit(&argc, argv); // Initialize GLUT

  glutInitWindowSize(1500, 1000); // Set the window's initial width & height

  glutCreateWindow("4*4 Chees Board"); // Create a window with the
  glutDisplayFunc(
      display); // Register display callback handler for window re-paint
  gluOrtho2D(-160, 160, -120, 140); // for axis change
  glutMainLoop();                   // Enter the event-processing loop

  return 0;
}
