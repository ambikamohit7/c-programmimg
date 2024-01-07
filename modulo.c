#include<stdio.h>
int main() {
    int a, b, A;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);
    
    A=a%b;
    printf("the remainder is:-%d", A);
    return 0;
}