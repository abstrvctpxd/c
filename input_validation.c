do
{
    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    if(marks < 0 || marks > 100)
    {
        printf("Invalid marks. Try again.\n");
    }

} while(marks < 0 || marks > 100);
