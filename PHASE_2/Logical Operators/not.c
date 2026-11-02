#include <stdio.h>

int main(void)
{
    int sensor_error = 0;

    if (!sensor_error)
    {
        printf("Sensor is working\n");
    }
    else
    {
        printf("Sensor error detected\n");
    }

    return 0;
}
