#include<conio.h>
#include<stdio.h>

int main()
{   
    int amount, a, b, d, c = -1, v;

    printf("Enter number from 1 till 3: ");
    scanf("%d", &v);

    printf("Enter N massive value: ");
    scanf("%d", &amount);

    const int N = amount;
    int Massive[N];


    switch (v)
    {
    case 1:

        for (b = 0; b <= amount; b++)
    {
        c = c + 1;
        Massive[b] = c;
    }
    for (b = 0; b <= N; b++ )
    {
        printf("\nResult: %d", Massive[b]);
    }
    
    break;
    
    case 2:

    printf("\nElements: ");

    for (b = amount; b >= 0; b--)
    {
        printf("\n%d", Massive[b]);
    }

    break;
    
    case 3:

        for (b = 0; b <= amount; b++)
    {
        c = c + 1;
        Massive[b] = c;
    }

    printf("\nNumbers: ");

    for (b = 0; b <= N; b++)
    {
        b = b + 1;
        d = d + 1;
        printf("%d ", Massive[b]);
    }

    printf("\nAmount of unmatched numbers: %d", d);

    break;
    
    default:

        printf("\nWrong number!");

        break;
    }

getch ();

}
