#include<stdio.h>
int main() {
    system("cls");
    int n;
    printf("enter number :" );
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {
       printf("the value is :- %d\n", i*n);
    }
    return 0;
    
}