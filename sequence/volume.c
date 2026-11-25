#include<stdio.h>
int main()
{
    int radius, height;
    float pi = 3.14, volume;
    printf ("enter the value of radius \n");
    scanf ("%d", &radius);
    printf ("enter the value of height \n");
    scanf ("%d", &height);
    volume = pi * radius * radius * height;
    printf ("the volume of cylinder is %f", volume);
    return 0;
    }