#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is not positive\n");
    }

    return 0;
}
