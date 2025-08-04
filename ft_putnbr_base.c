#include <unistd.h>
void ft1(char c){
write(1, &c, 1);

}

int ft2(char* base){
int i, j;
int len = 0;
while(base[len])
len++;
if(len < 2)
return 0;

for(int i = 0; i < len; i++){
if(base[i] == '+' || base[i] == '-')
return 0;

for(int j = i + 1; j < len; j++){
if(base[i] == base[j])
return 0;
}
}
return 1;
}

void ft3(int nbr, char* base){

long nb = nbr;
int bs = 0;

if(!ft2(base))
return;

while(base[bs])
bs++;

if(nb < 0){
ft1('-');
nb = -nb;
}
if(nb >= bs)
ft3(nb / bs, base);
ft1(base[nb % bs]);
}
int main(){
 ft3(42, "0123456789");
    write(1, "\n", 1);
    ft3(255, "01");
    write(1, "\n", 1);
    ft3(-255, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft3(125, "poneyvif");
    write(1, "\n", 1);

return 0;
}
