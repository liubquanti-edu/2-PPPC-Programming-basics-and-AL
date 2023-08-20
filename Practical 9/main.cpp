#include"graphics.h"
#include <windows.h>


/*
Фигуры

line() //рисует линию между двумя указанными точками
linerel() // рисует линию на заданное расстояние от текущей позиции CP
lineto() // рисует линию от текущей позиции
circle() //рисует окружность заданного радиуса
ellipse() // эллиптическая дуга
arc() //дуга окружности
getarccoords() // выдает координаты последнего обращения к функции arc
ellipse() // эллиптическая дуга
rectangle() // рисует прямоугольник
drawpoly() // рисует контур многоугольника
getx() // возвращает координату x текущей графической позиции
gety() // возвращает координату y текущей графической позиции
moveto() // изменение значения текущего положения пера (CR)
*/
/*Заполненые фигуры

bar() //прямоугольник
bar3d() 
fillpoly() // рисует и закрашивает многоугольник

fillellipse() // рисует и закрашивает эллипс
sector() //рисует заполненный эллиптический сектор
pieslice() //рисует заполненный сектор круга

*/
/*
Цвет и заливка

setcolor() // установка цвета
getcolor() // возвращает текущий цвет рисунка
getmaxcolor() //возвращает максимальное значение цвета, которое может быть передано функции setcolor
setbkcolor() // установка цвета фона
getbkcolor() // возвращает текущий цвет фона

putpixel() // установить цвет пикселя
getpixel() // возвращает цвет заданной точки

*/

/*
Работа с палитрой

setpalette() // изменение цвета в палитре
getpalette() // получает информацию о текущей палитре
setrgbpalette() // изменение цвета в палитре по системе RGB
getdefaultpalette() // возвращает структуру определения палитры
getpalettesize() // возвращает размер справочной таблицы цветов палитры
*/

/*
Стиль и заливка
floodfill() // заполняет ограниченную область
setfillstyle() // устанавливает цвет и шаблон заполнения
getfillsettings() // получает информацию о текущем шаблоне и цвете заполнения
setfillpattern() // задаёт шаблон заполнения определяемый пользователем
getfillpattern() // возвращает определенный пользователем шаблон заполнения
setlinestyle() // установка ширины и стиля линии
getlinesettings() // получает текущий цвет линии, шаблон и толщину
*/

/*
Окна и страницы

cleardevice() // очистка активной страницы
setactivepage() // устанавливает номер активной сраницы
setvisualpage() // устанавливает номер выводимой страницы
clearviewport() // очищает текущее окно
setviewport() // создаёт графическое окно
getviewsettings() // вызывает информацию об активном окне
getmaxx() // возвращает максимальную координату х экрана
getmaxy() // возвращает максимальную координату y экрана
*/

/*
Текст

outtext() // выводит строку на экран с текущей позиции
outtextxy() //выводит строку на экран с заданной позицией
settextstyle() // устанавливает шрифт, стиль и коэффициент увеличения шрифта
setusercharsize() // устанавливает пользовательский размер шрифта
settextjustify() // устанавливает режим выравнивания текста
textheight() // возвращает ширину строки в пикселях
textwidth() // возвращает высоту строки в пикселях
*/

/*
Рисуем машинку

#include <graphics.h>
#include <conio.h>
main()
{
initwindow(500, 500);// инициализируем графическое окно
// рисуем кузов
setfillstyle (1,4);  //  устанавливаем  вид заливки 1 -полный,  цвет заливки  4 - красный
bar(100, 150, 200, 170);// закрашенный прямоугольник  нижняя часть кузова
bar(120, 150, 170, 130);// закрашенный прямоугольник верхняя часть кузова
// рисуем колеса
setcolor(15); // устанавливаем  цвет  колеса
circle(120, 170, 10); //  левое колесо окружность ниже кузова
circle(170, 170, 10); // правое колесо окружность  ниже кузова
setfillstyle (1,8);  //  устанавливаем  вид заливки полный - 1 цвет серый - 8
floodfill(120,170,15); // закрашиваем круг левого колеса до границы круга  цветом 15
floodfill(170,170,15); // закрашиваем круг левого колеса до границы круга  цветом 15
getch(); // ждем нажатия кнопки
closegraph();  // выход из графического режима
}
*/


//движение машинки
/*
#include <graphics.h>
#include <conio.h>
// процедура отображения автомобиля с координатами левого верхнего угла x, y  и цветом cvet
void avto (int x, int y, int cvet)
{
setfillstyle (1,cvet );  //  устанавливаем  вид заливки 1 -полный,  цвет заливки  cvet
bar(x, y, x+100, y+20);// закрашенный прямоугольник  нижняя часть кузова
bar(x+20, y, x+70, y-20);// закрашенный прямоугольник верхняя часть кузова
setcolor(cvet); // устанавливаем  цвет  колеса
circle(x+20, y+30, 10); //  левое колесо окружность ниже кузова
circle(x+70, y+30, 10); // правое колесо окружность  ниже кузова
setfillstyle (1,cvet);  //  устанавливаем  вид заливки полный - 1 цвет cvet
floodfill(x+20,y+30,cvet); // закрашиваем круг левого колеса до границы круга  цветом cvet
floodfill(x+70,y+30,cvet); // закрашиваем круг левого колеса до границы круга  цветом cvet
}
main()
{
      int i; // перменная счетчик цикла
      int x; // координата x  автомобиля
      int y; // коордианта y автомобиля
      int v; // сокрость автомобиля
x=50;
y=200;
v=1;
initwindow(500, 500);// инициализируем графическое окно
// движемся
for (i=1; i<300; i++)
{  
    // отрисовываем автомобиль  заданным цветом 2
    avto(x,y, 2);
    // пауза
    delay(20);
     // стираем автомобиль - рисуем его цветом фона 0
    avto(x,y, 0);
     // увеличиваем координату x согласно скорости
    x=x+v;   
}
avto(x,y, 2);
getch();
closegraph();
}
*/
//рисуем круги
/*
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

// узор из концентрических окружностей центр узора x и y . k количество окружностей. r изменение радиуса
void uzor(int x, int y, int k, int r)
{
int i; // переменная цикла
int color; // переменная для цвета окружности
int radius; // радиус окружности
// пробегаемся  по всем окружностям
for (i=1; i<=k; i++)
{
// определяем цвет  окружности
color=i%15;
// определяем радиус окружности
radius=i*r;
setcolor(color);      // устанавливаем цвет
circle(x, y, radius); // окружность с центром x и  y и радиусом 10
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
//другие узоры
/*
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
// узор из концентрических окружностей центр узора x и y .
//k -количество окружностей . r - изменение радиуса
//dx -  смещение центра окружностей по оси x
//dy -  смещение центра окружностей по оис y

void uzor(int x, int y, int k, int r, int dx, int dy)
{
int i;
int color;// цвет  окружности
int radius;// радиус окружности
int xc, yc;// координаты центра окружности
xc=x;
yc=y;
// пробегаем все окружности их k
for (i=1; i<=k; i++)
{
color=i%15;//определяем цвет
radius=i*r;//определяем радиус
setcolor(color);
xc=xc+dx;// смещаем координату xc окружности
yc=yc+dy; // смещаем координату yc окружности  
circle(xc, yc, radius);// рисуем окружность
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


//с анимацией
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;


class CShape  // Базовий класс з віртуальною функцією Draw для відображення фігури на екрані
{
	public:
	virtual void Draw() = 0;
};


class CPointer:public CShape  // Класс який наслідується від базового класу і малює крапку
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


class CLine:public CPointer  // Малює відрізок
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


class CCircle:public CPointer  // Малює коло, наслідується від крапки
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


class CRec:public CLine  // Малює пустотілий прямокутник, наслідується від лінії
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


class CArc:public CCircle  // Малює криву, наслідується від кола
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


class CElips:public CArc  // Малює еліпс, наслідується від кривої
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

	CShape *picture[100];  // Массив з фігурами (зображеннями) для відображення на екрані
	picture[0]=new CRec(0,360,120,480);  // Створення і додавання фігури (зображення) в массив
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

	while(i<24)  // Перебирає фігури в массиві і виводить на екран
	{
		picture[i]->Draw();
		i++;
	}

	setactivepage(1);

	while(i<54)  // Перебирає фігури в массиві і виводить на екран
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
        int sx[3]={350,110,350},sy[3]={0,360,360};  // Координати фігур
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
           do{  // Анімація
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
             outtextxy(10,230, "Какойто ");  // Виводить текст на екран
             outtextxy(10,260, "текст");
             outtextxy(10,290, "))))");       
}


