#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    fprintf(fp, "John Kamau\n");
    fprintf(fp, "Mary Achieng\n");
    fprintf(fp, "Peter Mwangi\n");

    fclose(fp);

    printf("File created successfully.");

    return 0;
}
