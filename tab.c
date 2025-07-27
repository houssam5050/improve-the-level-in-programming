#include <stdio.h>
void ft(int*tab, int size){
int i = 0;
int temp;



while(i < size / 2){

temp = tab[i];
tab[i] = tab[size - 1 - i];
tab[size - 1 - i] = temp;

i++;
}
}
int main(){

int x[] = {1,2,3,4,5};
int size = 5;
ft(x, size);
for(int i = 0; i < size; i++)
printf(" %d", x[i]);

return 0;
}
