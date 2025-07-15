#include <stdio.h>

int main() {

    int x;

    printf("enter the number: ");
    scanf(" %d", &x);

    if(x % 2 == 0){
        printf("this number is even ");
    }else{
        printf("this number is odd ");
    }



    return 0;
}
