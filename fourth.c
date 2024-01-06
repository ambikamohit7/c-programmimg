#include <stdio.h>
int main()
{
    system("cls");
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);
    int area = a * b;
    printf("the area is :- %d ", area);
    return 0;
}