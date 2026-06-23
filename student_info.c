#include <stdio.h>

struct Student
{
    int studentNumber;
    char name[50];
    float averageMark;
};

int main()
{
    struct Student s1 = {101, "John Kamau", 78.5};

    printf("Student Number: %d\n", s1.studentNumber);
    printf("Name: %s\n", s1.name);
    printf("Average Mark: %.2f\n", s1.averageMark);

    return 0;
}
