#include <stdio.h>
int ft1(char*base){
int i, j;
int len = 0;
while(base[len])
len++;
if(len < 2)
return 0;

for(int i = 0; i < len; i++){
if(base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
return 0;
for(int j = i + 1; j < len; j++){
if(base[i] == base[j])
return 0;
}
}
return 1;
}int ft2(char c, char* base){
int i = 0;
while(base[i]){
if(base[i] == c)
return i;
i++;
}
return -1;
}
int ftr(char*str, char*base){
int sign = 1;
int result = 0;
int idx;
int bs = 0;

if(!ft1(base))
return 0;

while(base[bs])
bs++;

while(*str == ' ' || (*str >= 9 && *str <= 13))
str++;

while(*str == '+' || *str == '-'){
if(*str == '-')
sign*= -1;

str++;

}

while((idx = ft2(*str, base)) != -1){
result = result*bs + idx;

str++;
}
return result*sign;
}
int main(){
   printf("%d\n", ftr("   ---+--+1234ab567", "0123456789"));
    printf("%d\n", ftr("   --+10101", "01"));
    printf("%d\n", ftr("  +7F", "0123456789ABCDEF"));
    printf("%d\n", ftr("  -ye", "poneyvif"));
return 0;
}






