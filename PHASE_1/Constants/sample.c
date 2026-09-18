
#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*const  int days_in_week = 7;
  const float pi = 3.14159f;
   pi = 3.45;

  printf("NUMBER OF DAYS IN WEEK : %d\n",days_in_week);
  printf("THE VALUE OF PI IS : %.4xf",pi);
  return 0;
   */

   const float PI = 3.14159f;
   float radius ;
   float radius_1;



   printf("Enter the value of radius ");
   scanf("%f",&radius);

   radius_1 = PI * radius * radius ;

   printf("The  Radius of circle is : %f",radius_1);
   return 0;

}
