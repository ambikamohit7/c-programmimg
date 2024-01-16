#include<stdio.h>
int main() {
    system("cls");
    int marks;
    printf("enter marks");
    scanf("%d", &marks);

    if (marks>=30)
    {
     printf("the student is passed");
    }

    else if (marks<30)
    {
        printf("the student is failed");
    }
    return 0;

    
}