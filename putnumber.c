#include <unistd.h>
void putnum(int nb){
char l;

if(nb == -2147483648){
write(1, "-2147483648",10);
}

if(nb < 0){
write(1, "-", 1);
nb = nb * (-1);
}

if(nb >= 10){
putnum(nb / 10);
putnum(nb % 10);
}

else{
l = nb + '0';
write(1, &l, 1);
}
}
int main(){
putnum(545);

return 0;
}
