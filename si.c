#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int p, t, r, I;
    printf("enter nunber p");
    scanf("%d", &p);

    printf("enter number t");
    scanf("%d", &t);

    printf("enter number r");
    scanf("%d", &r);

    I = (p * t * r) / 100;
    printf("the simplde interest is:- %d", I);
    return 0;
}