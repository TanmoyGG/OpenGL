
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <cmath>
void circle(float radius, float xc, float yc, float r, float g, float b) {
  glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
  for (int i = 0; i < 200; i++) {
    glColor3f(r, g, b);
    float pi = 3.1416;
    float A = (i * 2 * pi) / 200;
    float r = radius;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + xc, y + yc);
  }
  glEnd();
}
void display() {
  glPointSize(5.0);
  glClearColor(1.0f, 1.0f, 1.0f,
               1.0f); // Set background color to black and opaque

  glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

  // main stucture
  glBegin(GL_POLYGON);

  glColor3ub(0, 0, 0);
  glVertex2f(-40, 20);
  glVertex2f(40, 20);
  glVertex2f(40, -20);
  glVertex2f(-40, -20);

  glEnd();

  circle(26.262747923, -54.6643334391238, -1.787364531943, 1.0f, 1.0f, 1.0f);
  circle(26.331927835, -23.6837506759919, -32.1087859596903, 1.0f, 1.0f, 1.0f);
  circle(26.53664556, 23.6734169362063, -31.5896738468232, 1.0f, 1.0f, 1.0f);
  circle(26.178152191, 54.6592857144184, -1.3983145244614, 1.0f, 1.0f, 1.0f);
  circle(16.176783386, 0, 25.9518876976814, 1.0f, 1.0f, 1.0f);
  circle(14.051627824, -0.4947808541595, 1.3705950455143, 0.0, 0.0, 0.0);

  glBegin(GL_POLYGON);

  glColor3ub(1, 1, 1);
  glVertex2f(-9.0302644606481, 12.531376072034);
  glVertex2f(-6.9140374532123, 19.9989608943676);
  glVertex2f(-4.9254877681222, 12.0073836272103);

  glEnd();

  glBegin(GL_POLYGON);

  glColor3ub(1, 1, 1);
  glVertex2f(5.1731571706587, 12.0073836272103);
  glVertex2f(6.6438328108728, 20.0098502674394);
  glVertex2f(8.484702032781, 12.1787924707413);

  glEnd();

  glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char **argv) {

  glutInit(&argc, argv); // Initialize GLUT

  glutInitWindowSize(1500, 1000); // Set the window's initial width & height

  glutCreateWindow("Batman LOGO"); // Create a window with the
  glutDisplayFunc(
      display); // Register display callback handler for window re-paint
  gluOrtho2D(-50, 50, -30, 30); // for axis change
  glutMainLoop();               // Enter the event-processing loop

  return 0;
}
