#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 1445454454454454545452;
    float mark = 90.2;
    double salary = 450000.6566;
    char grade ='A';
    char name[] =  "Manikandan";


    printf("size of age is : %zu\n",sizeof(age));
    printf("size of mark is : %zu\n",sizeof(mark));
    printf("sizze of salary is : %zu\n",sizeof(salary));
    printf("size of grade :%zu\n",sizeof(grade));
    printf("size of name : %zu",sizeof(name));


    return 0;



}
