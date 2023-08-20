#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{

float x, y, z;
int v, N, count=0;
char d, month[12][9]={"January","Febuary","March","April","May","Jun","July","August","September","October","November","December"};

printf ("Enter value from 1 till 3: ");
scanf ("%d",&v);

switch (v)
{
    default: printf ("Wrong number!");
        break;

    case 1:
        N = 30;
        printf("Enter x value: ");
        scanf("%f", &x);
        printf("Enter z value: ");
        scanf("%f", &z);
        y=x/z;
        int q = 2;
        for(int i = 1; i<N; i++)
        {
            y+=pow(x,q)/pow(z,q+1);
            q+=2;
        }
        printf("Result: y = %0.2f",y);
    break;

    case 2:
        for(int i=0;i<12;i++) 
            printf("%s\n",month[i]); 
    break;

    case 3:
        if (N>0)
            {
                printf("Enter N value: ");
                scanf("%d", &N);

                while (N > 0)
                    {
                        N /= 10;
                        count ++;
                    }
                
                printf("This number has %d amount of numbers", count);
            }
            else
            {
                printf ("Wrong number!");
            }
    break;
}
getch();
}