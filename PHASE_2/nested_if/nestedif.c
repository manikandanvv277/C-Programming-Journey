int main(){

int age ;
int citizen ;
printf("Enter your age : ");
scanf("%d", &age);

if (age >=18){
    printf("You are  18 and above .\n");

    printf("are you citizen (yes = 1 and no = 0):");
    scanf("%d",&citizen);

    if(citizen == 1){
        printf("you are elligible !!!");

    }
    else {
        printf("not elligible !!");
    }
}
else {
    printf("Your are not elligible , sorry !!!!");
}
}
