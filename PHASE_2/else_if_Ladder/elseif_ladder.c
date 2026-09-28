#include <stdio.h>

int main(void)
{
    int mark ;
    printf("Enter the mark : ");
    scanf("%d",&mark);


    if(mark>=90){
        printf(" hey you are A Grade");

    }
    else if(mark>=80){
        printf("hey  your are B Grade ");
    }
    else if (mark>=70){
        printf("hey you are C Grade ");

    }
    else{
        printf("hey sorry you are fail !!!!!");
    }
    return 0;
}
