#include <stdio.h>
#include <string.h>
int main(){

    char name[100];

    printf("enter your name: ");
    scanf(" %s", &name);
    
    
    if(strcmp(name, "houssam") == 0){ // my name is housssam  and this my informations for example 
            printf("you age is 19\n");
            printf("your live in morocco\n");
            printf("you have 5.3DH in your bank acount");
    }else{
        printf("i did not knew you  sorry");
    }




    return 0;
}
