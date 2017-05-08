//**** FIGURAS


#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

//GLfloat X = 10.0f;
//GLfloat zoom =0.1f;
//GLfloat Y = 10.0f;
//GLfloat Z = 10.0f;
//GLfloat scale = 10.0f;

float conx =21.87, a=0, conz=31.25;
void pared1(){
	GLfloat mat_ambient[] = { 0.329412f, 0.223529f, 0.027451f,1.0f };
    GLfloat mat_diffuse[] = { 0.780392f, 0.568627f, 0.113725f, 1.0f };
    GLfloat mat_specular[] = { 0.992157f, 0.941176f, 0.807843f, 1.0f };
    GLfloat shine[] = {27.8974f};
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    
    GLfloat ejey=0.0f,ejex=-150,consx=23.214f,consz=31.25,sepa=0;;
      int col=0, a=0,b=10;
    for(int y=0; y<=3;y++){
        ejex=-150;b=10;
        for(int x=0; x<=12;x++){
           glBegin(GL_QUADS);
                glVertex3f(ejex+sepa,ejey+sepa,-150+a);
                glVertex3f(ejex+consx,ejey+sepa,-150+b);
               glVertex3f(ejex+consx,ejey+consz,-150+b);
                glVertex3f(ejex+sepa,ejey+consz,-150+a);
             if (b==10)
                       {
                          a=10;
                          b=0; /* code */
                       }      
                else{
                    b=10;
                    a=0;
                } 
            glEnd();
            glFlush(); 
            sepa=2;    
            ejex=ejex+consx;
        }
        ejey=ejey+consz;
    }
}

void pared2(){
	GLfloat mat_ambient[] = { 0.329412f, 0.223529f, 0.027451f,1.0f };
    GLfloat mat_diffuse[] = { 0.780392f, 0.568627f, 0.113725f, 1.0f };
    GLfloat mat_specular[] = { 0.992157f, 0.941176f, 0.807843f, 1.0f };
    GLfloat shine[] = {27.8974f};
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    GLfloat ejey=-150.0f,ejex=-150,consx=23.214f,consz=31.25,sepa=0;;
    for(int y=0; y<=8;y++){
        ejex=-150,a=0;
        for(int x=0; x<=12;x++){
           glBegin(GL_QUADS);
                glVertex3f(ejex+sepa,0,ejey+sepa);
                glVertex3f(ejex+consx,0,ejey+sepa);
               glVertex3f(ejex+consx,0,ejey+consz);
                glVertex3f(ejex+sepa,0,ejey+consz);
            glEnd();
            glFlush(); 
            sepa=2;    
            ejex=ejex+consx;
        }
        ejey=ejey+consz;
    }
}

void cubo(){
	GLfloat mat_ambient[] = { 0.0f, 0.0f, 0.0f,1.0f };
    GLfloat mat_diffuse[] = { 0.5f, 0.0f, 0.0f, 1.0f };
    GLfloat mat_specular[] = { 0.7f, 0.6f, 0.6f, 1.0f };
    GLfloat shine[] = {0.25f};
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
glTranslatef(0,75,110);
    glPushMatrix();
    glRotatef(-15,0,1,0);
    glRotatef(10,1,0,0);
    glutSolidCube(50);
    glPopMatrix();
}

void esfera(){
	GLfloat mat_ambient[] = { 0.0f, 0.05f, 0.0f,1.0f };
    GLfloat mat_diffuse[] = { 0.4f, 0.5f, 0.4f, 1.0f };
    GLfloat mat_specular[] = { 0.04f, 0.7f, 0.04f, 1.0f };
    GLfloat shine[] = {0.078125f};
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	glPushMatrix();
    glTranslatef(-100,0,0);
    glutSolidSphere(40,40,40);
    glPopMatrix();
}

void cono(){
	GLfloat mat_ambient[] = { 0.0f, 0.1f, 0.06f,1.0f };
    GLfloat mat_diffuse[] = { 0.0f, 0.50980392f, 0.50980392f, 1.0f };
    GLfloat mat_specular[] = { 0.50196078f, 0.50196078f, 0.50196078f, 1.0f };
    GLfloat shine[] = {0-25};
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	glPushMatrix();
    glTranslatef(100,-25,0);
    glRotatef(-90,1,0,0);
    glutSolidCone(40,60,10,25);
    glPopMatrix();
}

void init(void)
{
	glClearColor(0,0,0,0);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glShadeModel(GL_SMOOTH);
}

void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-200, 200, -200, 200, -200, 200);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
	//rotamos el dibujo
    glRotatef(20,1,0,0);
    glRotatef(-10,0,1,0);
    
    //dibujo de las paredes
    pared1();
    pared2();

    //dibujam0s las figuras
    cubo();
	esfera();
    cono();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (60, 60);
    glutCreateWindow ("Figuras");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}
