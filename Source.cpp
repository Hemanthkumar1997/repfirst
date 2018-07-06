#include<glut.h>
#include<cmath>
#include<Windows.h>

int radius =10;
int c=60,mxmn=1;


void heart(){
	Sleep(150);
		glBegin(GL_POLYGON);
		 for (float x = -1.139; x <= 1.139; x += 0.001) 
        {
            float delta = pow((x*x),1.0/3) *pow((x*x),1.0/3) - 4*x*x + 4;
            float y1 = (pow((x*x),1.0/3) + sqrt(delta)) / 2;
            float y2 = (pow((x*x),1.0/3) - sqrt(delta)) / 2;
            glVertex2f(x, y1);
            glVertex2f(x, y2);
        }
		glEnd();
		Beep(1000,150);
		Sleep(150);
}


void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,0);
	gluOrtho2D(-2,3,-2,3);
	glColor3f(1,0,0);
	heart();
	glutSwapBuffers();
}

void anim(){
mxmn=mxmn==1?-1:1;
	if(mxmn==1)
	glScalef(1,1,1);
	else
		glLoadIdentity();
	glutPostRedisplay();
}


void main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowPosition(250,50);
	glutInitWindowSize(900,600);
	glutCreateWindow("sort");
	glutDisplayFunc(display);
	glutIdleFunc(anim);
	glutMainLoop();
}