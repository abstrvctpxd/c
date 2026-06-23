#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float average;

    for(i = 0; i < 5; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f", average);

    return 0;
}
