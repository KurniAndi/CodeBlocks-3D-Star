#include <windows.h>  // MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Global variables */
char title[] = "star";
GLfloat star = 0.0f;     // Rotational angle for DIAMOND [NEW]
int refreshMills = 8;        // refresh interval in milliseconds [NEW]

/* Initialize OpenGL Graphics */
void initGL() {
   glClearColor(1.0f, 0.0f, 1.0f, 0.0f); // Set background color to black and opaque
   glClearDepth(1.0f);                   // Set background depth to fa0rthest
   glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
   glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
   glShadeModel(GL_SMOOTH);   // Enable smooth shading
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

/* Handler for window-repaint event. Called back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {//menampilkan objek 3d
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
   glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

   // Render a color-cube consisting of 6 quads with different color
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(-0.1f, 0.5f, -9.0f);  // Move right and into the screen
   glRotatef(star, 0.0f, 1.0f, 1.0f);  // Rotate about (1,1,1)-axis [NEW]

   //inisial

    glBegin(GL_TRIANGLES);//berhubungan 1 sma lain
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c //titik sumbu
        glColor3f(0.0f, 1.0f, 0.0f);// warna sumbu
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l ngarep
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
         glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l mburi
         glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d ngarep
         glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

        glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d mburi
          glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m




         glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

       glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l ngarep
         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m




        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

          glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h ngarep
         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m






          glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f ngarep
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m





        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f ngarep

        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f mburi
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d ngarep
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m
    glEnd();





   // Render a color-cube consisting of 6 quads with different colors
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(0.5f, 0.3f, -9.0f);  // Move right and into the screen
   glRotatef(star, 0.0f, 1.0f, 0.0f);  // Rotate about (1,1,1)-axis [NEW]

    //inisial

    glBegin(GL_TRIANGLES);
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l mburi
         glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d ngarep
         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

        glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); //c
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d mburi
          glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m




         glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

       glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l ngarep
         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.3, -0.5, 0.0f); //k
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); //l mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m




        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); //j mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

          glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h ngarep
         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); //l
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m






          glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.8f, 0.8f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h ngarep
        glColor3f(0.6f, 0.6f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
         glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.1335651297556, -0.239042579995, 0.0f); //h mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f ngarep
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); //g
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m





        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f ngarep

        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glVertex3f(0.061002771479, 0.0044444444444, 0.0f); //f mburi
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m

         glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.9f, 0.9f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d ngarep
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); //m

          glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); //e
        glColor3f(0.8f, 0.0f, 0.0f);
        glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); //d mburi
        glColor3f(0.6f, 0.0f, 0.0f);
        glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); //m
    glEnd();




   glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)

   // Update the rotational angle after each refresh [NEW]

   star -= 0.90f;
}


/* Called back when timer expired [NEW] */
void timer(int value) {
   glutPostRedisplay();      // Post re-paint request to activate display()
   glutTimerFunc(refreshMills, timer, 0); // next timer call milliseconds later
}

/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;

   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);

   // Set the aspect ratio of the clipping volume to match the viewport
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();             // Reset
   // Enable perspective projection with fovy, aspect, zNear and zFar
   gluPerspective(10.0f, aspect, 0.1f, 100.0f);//pengaturan skala
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
   glutInit(&argc, argv);            // Initialize GLUT
   glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
   glutInitWindowSize(1000, 1000);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutCreateWindow(title);          // Create window with the given title
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   glutReshapeFunc(reshape);       // Register callback handler for window re-size event
   initGL();                       // Our own OpenGL initialization
   glutTimerFunc(0, timer, 0);     // First timer call immediately [NEW]
   glutMainLoop();                 // Enter the infinite event-processing loop
   return 0;
}
