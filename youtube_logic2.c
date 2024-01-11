// program for if the number is divisible y 2 or not.
#include<stdio.h>
int main() {
    system("cls");
    // if the modulo value is:-
    // even->0;
    // odd->1;

    
    int x;
    printf("enter a number:");
    scanf("%d", &x);

    printf("the output is : %d", x%2 == 0);
}