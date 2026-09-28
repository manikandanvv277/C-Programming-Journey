#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("\n Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping : a = %d, b = %d\n" , a, b);
    printf("Value of A is : %d\n",a);
    printf("Value of B is : %d",b);

    return 0;
}
