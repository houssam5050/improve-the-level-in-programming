#include <stdio.h>
#include <math.h>

int main(){

    int x, y;
    int a, b;
    int result1;
    int result2;

    printf("enter the first numner:\n ");
    scanf(" %d", &x);

    printf("enter the power number: \n");
    scanf(" %d", &y);

    printf("enter the second number : \n");
    scanf(" %d", &a);

    printf("enter the power number: \n");
    scanf(" %d", &b);

    result1 = pow(x, y);
    result2 = pow(a, b);


    printf("the result is: %d  ", result1 + result2);











    return 0;
}
