#include <stdio.h>

int main(void)
{
    int is_weekend = 0;
    int is_holiday = 1;

    if (is_weekend == 1 || is_holiday == 1)
    {
        printf("Holiday available\n");
    }
    else
    {
        printf("Working day\n");
    }

    return 0;
}
