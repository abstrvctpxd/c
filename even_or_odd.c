#include <stdio.h>

void checkEvenOdd(int num)
{
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);

    return 0;
}
