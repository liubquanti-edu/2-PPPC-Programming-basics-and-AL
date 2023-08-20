#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{

float x, y;
int v, m;
char d;

printf ("Enter value from 1 till 3: ");
scanf ("%d",&v);

switch (v)
{
    default: printf ("Wrong number!");
        break;
    case 1:
        printf ("Enter x value: ");
        scanf ("%d",&x);

            if (x>=87,4)
            {
                y=(pow(x,2)+(3*x-2)/(3*x+2));
            }
            else
            {
                y=(((pow(x,2)-(3*x))/x)+(x/(pow(x,2)-(3*x))));
            }
            
        printf("Result %f: ", y);
        break;

    case 2:
        printf ("Enter month number: ");
        scanf ("%d",&m);

            switch (m)
            {
            case 1:
                printf ("January");

                break;

            case  2 :
                printf ("February");

                break;

            case  3 :
                printf ("March");

                break;

            case  4 :
                printf ("April");

                break;

            case  5 :
                printf ("May");

                break;

            case  6 :
                printf ("June");

                break;

            case  7 :
                printf ("July");

                break;

            case  8 :
                printf ("August");

                break;

            case  9 :
                printf ("September");

                break;

            case  10 :
                printf ("October");

                break;

            case  11 :
                printf ("November");

                break;

            case  12 :
                printf ("December");

                break;
            
            default: printf ("Wrong number!");
                break;
            }

        break;

    case 3:
        printf("Enter drink first letter: ");
            scanf("%s", &d);
            switch(d)
            {
            case 'a':
            case 'A':
                printf("Airmail");
                break;

            case 'b':
            case 'B':
                printf("Beer");
                break;

            case 'c':
            case 'C':
                printf("Coca Cola");
                break;

            case 'd':
            case 'D':
                printf("Dr. Pepper");
                break;

            case 'e':
            case 'E':
                printf("Eggnog");
                break;
            
            case 'f':
            case 'F':
                printf("Fanta");
                break;
            
            case 'g':
            case 'G':
                printf("Gl?gg");
                break;
            
            case 'h':
            case 'H':
                printf("Hard seltzer");
                break;
            
            case 'i':
            case 'I':
                printf("Ice Blast");
                break;
            
            case 'j':
            case 'J':
                printf("Jivchik");
                break;
            
            case 'k':
            case 'K':
                printf("Kontabas");
                break;
            
            case 'l':
            case 'L':
                printf("Lanique");
                break;
            
            case 'm':
            case 'M':
                printf("Mahia");
                break;
            
            case 'n':
            case 'N':
                printf("Negroni");
                break;
            
            case 'o':
            case 'O':
                printf("Orange juise");
                break;
            
            case 'p':
            case 'P':
                printf("Pepsi Cola");
                break;
            
            case 'q':
            case 'Q':
                printf("Quaalude");
                break;
            
            case 'r':
            case 'R':
                printf("Rabbits Foot");
                break;
            
            case 's':
            case 'S':
                printf("Sandora");
                break;
            
            case 't':
            case 'T':
                printf("Tea");
                break;
            
            case 'u':
            case 'U':
                printf("U'Luvka Valentine");
                break;
            
            case 'v':
            case 'V':
                printf("Va-Va Shot");
                break;
            
            case 'w':
            case 'W':
                printf("Water");
                break;
            
            case 'x':
            case 'X':
                printf("X Breeze");
                break;
            
            case 'y':
            case 'Y':
                printf("Yakisugi Sour");
                break;
            
            case 'z':
            case 'Z':
                printf("Zen Collins");
                break;
            
            default: printf ("Wrong symbol!");
                break;
            }
}
getch();
}