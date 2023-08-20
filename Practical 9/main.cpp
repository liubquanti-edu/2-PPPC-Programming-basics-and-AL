#include"graphics.h"
#include <windows.h>


/*
������

line() //������ ����� ����� ����� ���������� �������
linerel() // ������ ����� �� �������� ���������� �� ������� ������� CP
lineto() // ������ ����� �� ������� �������
circle() //������ ���������� ��������� �������
ellipse() // ������������� ����
arc() //���� ����������
getarccoords() // ������ ���������� ���������� ��������� � ������� arc
ellipse() // ������������� ����
rectangle() // ������ �������������
drawpoly() // ������ ������ ��������������
getx() // ���������� ���������� x ������� ����������� �������
gety() // ���������� ���������� y ������� ����������� �������
moveto() // ��������� �������� �������� ��������� ���� (CR)
*/
/*���������� ������

bar() //�������������
bar3d() 
fillpoly() // ������ � ����������� �������������

fillellipse() // ������ � ����������� ������
sector() //������ ����������� ������������� ������
pieslice() //������ ����������� ������ �����

*/
/*
���� � �������

setcolor() // ��������� �����
getcolor() // ���������� ������� ���� �������
getmaxcolor() //���������� ������������ �������� �����, ������� ����� ���� �������� ������� setcolor
setbkcolor() // ��������� ����� ����
getbkcolor() // ���������� ������� ���� ����

putpixel() // ���������� ���� �������
getpixel() // ���������� ���� �������� �����

*/

/*
������ � ��������

setpalette() // ��������� ����� � �������
getpalette() // �������� ���������� � ������� �������
setrgbpalette() // ��������� ����� � ������� �� ������� RGB
getdefaultpalette() // ���������� ��������� ����������� �������
getpalettesize() // ���������� ������ ���������� ������� ������ �������
*/

/*
����� � �������
floodfill() // ��������� ������������ �������
setfillstyle() // ������������� ���� � ������ ����������
getfillsettings() // �������� ���������� � ������� ������� � ����� ����������
setfillpattern() // ����� ������ ���������� ������������ �������������
getfillpattern() // ���������� ������������ ������������� ������ ����������
setlinestyle() // ��������� ������ � ����� �����
getlinesettings() // �������� ������� ���� �����, ������ � �������
*/

/*
���� � ��������

cleardevice() // ������� �������� ��������
setactivepage() // ������������� ����� �������� �������
setvisualpage() // ������������� ����� ��������� ��������
clearviewport() // ������� ������� ����
setviewport() // ������ ����������� ����
getviewsettings() // �������� ���������� �� �������� ����
getmaxx() // ���������� ������������ ���������� � ������
getmaxy() // ���������� ������������ ���������� y ������
*/

/*
�����

outtext() // ������� ������ �� ����� � ������� �������
outtextxy() //������� ������ �� ����� � �������� ��������
settextstyle() // ������������� �����, ����� � ����������� ���������� ������
setusercharsize() // ������������� ���������������� ������ ������
settextjustify() // ������������� ����� ������������ ������
textheight() // ���������� ������ ������ � ��������
textwidth() // ���������� ������ ������ � ��������
*/

/*
������ �������

#include <graphics.h>
#include <conio.h>
main()
{
initwindow(500, 500);// �������������� ����������� ����
// ������ �����
setfillstyle (1,4);  //  �������������  ��� ������� 1 -������,  ���� �������  4 - �������
bar(100, 150, 200, 170);// ����������� �������������  ������ ����� ������
bar(120, 150, 170, 130);// ����������� ������������� ������� ����� ������
// ������ ������
setcolor(15); // �������������  ����  ������
circle(120, 170, 10); //  ����� ������ ���������� ���� ������
circle(170, 170, 10); // ������ ������ ����������  ���� ������
setfillstyle (1,8);  //  �������������  ��� ������� ������ - 1 ���� ����� - 8
floodfill(120,170,15); // ����������� ���� ������ ������ �� ������� �����  ������ 15
floodfill(170,170,15); // ����������� ���� ������ ������ �� ������� �����  ������ 15
getch(); // ���� ������� ������
closegraph();  // ����� �� ������������ ������
}
*/


//�������� �������
/*
#include <graphics.h>
#include <conio.h>
// ��������� ����������� ���������� � ������������ ������ �������� ���� x, y  � ������ cvet
void avto (int x, int y, int cvet)
{
setfillstyle (1,cvet );  //  �������������  ��� ������� 1 -������,  ���� �������  cvet
bar(x, y, x+100, y+20);// ����������� �������������  ������ ����� ������
bar(x+20, y, x+70, y-20);// ����������� ������������� ������� ����� ������
setcolor(cvet); // �������������  ����  ������
circle(x+20, y+30, 10); //  ����� ������ ���������� ���� ������
circle(x+70, y+30, 10); // ������ ������ ����������  ���� ������
setfillstyle (1,cvet);  //  �������������  ��� ������� ������ - 1 ���� cvet
floodfill(x+20,y+30,cvet); // ����������� ���� ������ ������ �� ������� �����  ������ cvet
floodfill(x+70,y+30,cvet); // ����������� ���� ������ ������ �� ������� �����  ������ cvet
}
main()
{
      int i; // ��������� ������� �����
      int x; // ���������� x  ����������
      int y; // ���������� y ����������
      int v; // �������� ����������
x=50;
y=200;
v=1;
initwindow(500, 500);// �������������� ����������� ����
// ��������
for (i=1; i<300; i++)
{  
    // ������������ ����������  �������� ������ 2
    avto(x,y, 2);
    // �����
    delay(20);
     // ������� ���������� - ������ ��� ������ ���� 0
    avto(x,y, 0);
     // ����������� ���������� x �������� ��������
    x=x+v;   
}
avto(x,y, 2);
getch();
closegraph();
}
*/
//������ �����
/*
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

// ���� �� ��������������� ����������� ����� ����� x � y . k ���������� �����������. r ��������� �������
void uzor(int x, int y, int k, int r)
{
int i; // ���������� �����
int color; // ���������� ��� ����� ����������
int radius; // ������ ����������
// �����������  �� ���� �����������
for (i=1; i<=k; i++)
{
// ���������� ����  ����������
color=i%15;
// ���������� ������ ����������
radius=i*r;
setcolor(color);      // ������������� ����
circle(x, y, radius); // ���������� � ������� x �  y � �������� 10
}
 }
main()
{
initwindow(700, 700);
uzor (200,250,40, 5);
uzor (300,250,40, 5);
getch();
closegraph();
}*/
//������ �����
/*
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
// ���� �� ��������������� ����������� ����� ����� x � y .
//k -���������� ����������� . r - ��������� �������
//dx -  �������� ������ ����������� �� ��� x
//dy -  �������� ������ ����������� �� ��� y

void uzor(int x, int y, int k, int r, int dx, int dy)
{
int i;
int color;// ����  ����������
int radius;// ������ ����������
int xc, yc;// ���������� ������ ����������
xc=x;
yc=y;
// ��������� ��� ���������� �� k
for (i=1; i<=k; i++)
{
color=i%15;//���������� ����
radius=i*r;//���������� ������
setcolor(color);
xc=xc+dx;// ������� ���������� xc ����������
yc=yc+dy; // ������� ���������� yc ����������  
circle(xc, yc, radius);// ������ ����������
}
 }

main()
{
initwindow(800, 800);
uzor (100,200,5, 20, 5, 0);
uzor (200,200,5, 20, -5, 0);
uzor (150,150,5, 20, 0, 5);
uzor (150,250,5, 20, 0, -5);
getch();
closegraph();
}
*/


//� ���������
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;


class CShape  // ������� ����� � ���������� �������� Draw ��� ����������� ������ �� �����
{
	public:
	virtual void Draw() = 0;
};


class CPointer:public CShape  // ����� ���� ���������� �� �������� ����� � ����� ������
{
protected:
	int x;
	int y;
	int color;
public:
	CPointer(int z1,int z2,int col)
	{
		x=z1;
		y=z2;
		this->color=col;
	};

	void Draw()
	{
		setcolor(color);
		putpixel(x,y,color);
	};
};


class CLine:public CPointer  // ����� ������
{
protected:
	int x1;
	int y1;
public:
	CLine(int z1,int z2,int z3,int z4):CPointer(z1,z2,color)
	{
		x1=z3;
		y1=z4;
	};

	void Draw()
	{
		line (x,y,x1,y1);
	};
};


class CCircle:public CPointer  // ����� ����, ���������� �� ������
{
protected:
	int r;
public:
	CCircle(int z1,int z2,int z5):CPointer(z1,z2,color){ r=z5;};

	void Draw()
	{
		circle (x,y,r);
	};
};


class CRec:public CLine  // ����� ��������� �����������, ���������� �� ��
{
protected:
	int x1;
	int y1;
public:
 	CRec(int z1,int z2,int z3,int z4):CLine(z1,z2,z3,z4)
	{
		x1=z3;
		y1=z4;
	};

	void Draw()
	{
		rectangle (x,y,x1,y1);
	};
};


class CArc:public CCircle  // ����� �����, ���������� �� ����
{
protected:
	int stangle;
	int endangle;
public:
	CArc(int z1,int z2,int z6,int z7,int z5):CCircle(z1,z2,z5)
	{
		stangle=z6;
		endangle=z7;
	};

	void Draw()
	{
		arc (x,y,stangle,endangle,r);
	};
 };


class CElips:public CArc  // ����� ����, ���������� �� �����
{
protected:
	int xradius;
	int yradius;
public:
	CElips(int z1,int z2,int z6, int z7,int z5,int z9):CArc(z1,z2,z6,z7,z5)
	{
		xradius= z5;
		yradius=z9;
	};

	void Draw()
	{
		ellipse(x,y,stangle,endangle,xradius,yradius);
	};
 };


class CColor:public CPointer
{
protected:
	int selectcolor;
public:
	CColor(int z1,int z2,int col,int selectz):CPointer(z1,z2,col)
	{
		x=z1;
		y=z2;
		color=col=15;
		selectcolor=selectz;
	};

	void Draw()
		{
			setfillstyle(1,selectcolor);
			floodfill(x,y,color);
		};
	};


void Ruch();
int main()
{
	setlocale(LC_ALL, "rus");
	int grdriver = DETECT, grmode, errorcode;
	initgraph(&grdriver, &grmode, "../bgi");
	errorcode = graphresult();

	if (errorcode != grOk)
	{
		printf("Error!");
		getch();
		exit(1);
	}

	CShape *picture[100];  // ������ � �������� (������������) ��� ����������� �� �����
	picture[0]=new CRec(0,360,120,480);  // ��������� � ��������� ������ (����������) � ������
	picture[1]=new CColor(5,460,15,15);
	picture[2]=new CRec(240,360,360,480);
	picture[3]=new CColor(245,460,15,15);
	picture[4]=new CRec(480,360,600,480);
	picture[5]=new CColor(485,460,15,15);
	picture[6]=new CRec(120,240,240,360);
	picture[7]=new CColor(125,245,15,15);
	picture[8]=new CRec(360,240,480,360);
	picture[9]=new CColor(365,350,15,15);
	picture[10]=new CRec(600,240,642,360);
	picture[11]=new CColor(605,350,15,15);
	picture[12]=new CRec(0,120,120,240);
	picture[13]=new CColor(5,125,15,15);
	picture[14]=new CRec(240,120,360,240);
	picture[15]=new CColor(245,125,15,15);
	picture[16]=new CRec(480,120,600,240);
	picture[17]=new CColor(485,125,15,15);
	picture[18]=new CRec(120,0,240,120);
	picture[19]=new CColor(125,5,15,15);
	picture[20]=new CRec(360,0,480,120);
	picture[21]=new CColor(365,5,15,15);
	picture[22]=new CRec(600,0,642,120);
	picture[23]=new CColor(605,5,15,15);

	picture[24]=new CRec(150,460,210,470);
	picture[25]=new CColor(155,465,15,7);
	picture[26]=new CRec(155,450,205,460);
	picture[27]=new CColor(160,455,15,7);
	picture[28]=new CCircle(180,390,20);
	picture[29]=new CColor(185,391,15,7);
	picture[30]=new CRec(165,450,195,410);
	picture[31]=new CColor(170,415,15,7);

	picture[32]=new CRec(390,460,450,470);
	picture[33]=new CColor(395,465,15,7);
	picture[34]=new CRec(395,450,445,460);
	picture[35]=new CColor(396,455,15,7);
	picture[36]=new CCircle(420,390,20);
	picture[37]=new CColor(421,391,15,7);
	picture[38]=new CRec(405,450,435,410);
	picture[39]=new CColor(410,415,15,7);

	picture[40]=new CRec(510,100,570,110);
	picture[41]=new CColor(515,105,15,7);
	picture[42]=new CRec(515,90,565,100);
	picture[43]=new CColor(520,95,15,7);
	picture[44]=new CRec(515,50,565,30);
	picture[45]=new CColor(520,35,15,7);
	picture[46]=new CRec(525,90,555,50);
	picture[47]=new CColor(530,60,15,7);
	picture[48]=new CRec(515,30,525,20);
	picture[49]=new CColor(516,21,15,7);
	picture[50]=new CRec(555,30,565,20);
	picture[51]=new CColor(556,22,15,7);
	picture[52]=new CRec(530,30,550,20);
	picture[53]=new CColor(531,21,15,7);
 
	int i=0;

	while(i<24)  // �������� ������ � ������ � �������� �� �����
	{
		picture[i]->Draw();
		i++;
	}

	setactivepage(1);

	while(i<54)  // �������� ������ � ������ � �������� �� �����
	{
		picture[i]->Draw();
		i++;
	}

	Ruch();
	getch();
	closegraph();

	return 0;
}
  void Ruch()
 {
        int size;
        void *t[3];
        int sx[3]={350,110,350},sy[3]={0,360,360};  // ���������� �����
        size=imagesize(360,0,640,280);
        t[0]=malloc(size);
        getimage(470,0,580,120,t[0]);
        putimage(460,0,t[0],1);
        size=imagesize(120,360,240,480);
        t[1]=malloc(size);
        getimage(120,360,240,480,t[1]);
        putimage(120,360,t[1],1);
        size=imagesize(360,360,480,480);
        t[2]=malloc(size);
        getimage(360,360,480,480,t[2]);
        putimage(360,360,t[2],1);
        setactivepage(0);
        setvisualpage(0);
           do{  // �������
             for(int i=0;i<3;i++)                
             putimage(sx[i],sy[i],t[i],1);
             delay(100);
             if(sx[0]-10>100)
             for(int i=0;i<3;i++) 
             putimage(sx[i],sy[i],t[i],1);
             sx[0]-=10;
             sy[1]-=10;
             sy[2]-=10;
             }while(sx[0]>100);
             setfillstyle(1,25);
             free(t);  
             settextstyle(9,0,3);
             outtextxy(10,230, "������� ");  // �������� ����� �� �����
             outtextxy(10,260, "�����");
             outtextxy(10,290, "))))");       
}


