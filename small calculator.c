#include <stdio.h>

int add(int x, int y){
    return x + y;
}
int add2(int a, int b){
    return a - b;
}
int add3(int c, int d){
    return c * d;
}
int add4(int e, int f){
    return e / f;
}

int main(){
    int num1, num2;
    char num;
    int sum;

    printf("choose the operator (+ - * /)\n");
    scanf(" %c", &num);

    if(num == '+'){



    printf("enter the furst number: \n");
    scanf(" %d", &num1);

    printf("enter the second number: \n");
    scanf(" %d", &num2);

     sum = add(num1, num2);

     printf("  the resulr is: %d  ", num1 + num2);
    }else if(num == '-'){

    printf("enter the furst number: \n");
    scanf(" %d", &num1);

    printf("enter the second number: \n");
    scanf(" %d", &num2);

     sum = add2(num1, num2);

     printf("  the resulr is: %d  ", num1 - num2);
    }else if(num == '*'){

    printf("enter the furst number: \n");
    scanf(" %d", &num1);

    printf("enter the second number: \n");
    scanf(" %d", &num2);

     sum = add3(num1, num2);

     printf("  the resulr is: %d  ", num1 * num2);
    }else if(num == '/'){

    printf("enter the furst number: \n");
    scanf(" %d", &num1);

    printf("enter the second number: \n");
    scanf(" %d", &num2);
    if(num2 % 2 == 0){

     sum = add4(num1, num2);

     printf("  the resulr is: %d  ", num1 / num2);
    }else{
        printf("bad input! ");
    }
    }


    return 0;
}
