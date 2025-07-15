#include <stdio.h>

int main(){

    int x = 10;
    int* ptr = &x;
     printf(" %d\n", x);
     printf(" %d\n", *ptr);
     printf(" %d\n", &x); // adress of x
     printf(" %d\n", ptr); // adress of ptr



    return 0;
}
