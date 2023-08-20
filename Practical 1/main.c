#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

float k, m, x, y, z;
 
printf ("Enter k value: ");
scanf ("%f",&k);

printf ("Enter m value: ");
scanf ("%f",&m);

printf ("Enter x value: ");
scanf ("%f",&x);

printf ("Enter z value: ");
scanf ("%f",&z);

y=(sqrt(pow(5*x+10,2)-sqrt(pow(x,2)-pow(z,3))+pow(z,x)-pow(x,z)+(pow(m,k)/pow(k,m))))/(sqrt(pow(z,m)+pow(k,m+z)/16));

printf("Result %f: ", y);
}