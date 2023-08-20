#include<stdio.h>
#include<conio.h>
#include<math.h>

long int factorial(long int g)
    {
        if (g == 0 || g == 1) return 1;
        return g * factorial(g - 1);
    }

int main(){

    int v, c, n, a, b, o;
    float y, s, m, k, j;
    long int g;

    printf("Enter value from 1 till 4: ");
    scanf ("%d", &v);

    switch (v)
    {
    case 1:
        
        printf("Enter s value: ");
        scanf("%f", &s);
        printf("Enter m value: ");
        scanf("%f", &m);
        printf("Enter k value: ");
        scanf("%f", &k);

        for(int x = 1; x < 50; x+=2)

        {
            y = pow(x, 3) + s * pow(x, 5) - m * k + sqrt(x + m - k);

            printf("Result: %0.2f | X: %d \n", y, x);
        }

        break;
    
    case 2:

        printf("Enter 1kg price: ");
        scanf("%f", &j);
        printf("Enter amount: ");
        scanf("%d", &c);
        c += 1;
        for (int m = 1; m < c; m++)
        {
            printf("%d kg price: %0.2f\n", a, j*a);
        }

        break;

    case 3:

        printf("Enter A value: ");
        scanf("%d", &a);
        printf("Enter B value: ");
        scanf("%d", &b);
        int abs=0;
        for (int m = a; m <= b; m++)
        {
            abs += pow(m,2);
        }
        printf("Result = %d", abs);

        break;

    case 4:

        printf("Enter amount: ");
        scanf("%d", &o);
        long int f = 0;
        for (long int g = 0; g < o + 1; g++)
        {
            f+=factorial(g);
        }
        printf("Result: %d", f);
        break;

    default: printf ("Wrong number!");
        break;
    }

}