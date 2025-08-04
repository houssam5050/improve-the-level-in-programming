#include <stdio.h>
int ft(char *str){
int result = 0;
int sign = 1;

while(*str == ' ' || (*str >= '\t' && *str <= '\r')){
str++;
}
while(*str == '+' || *str == '-'){

if(*str == '-')
sign = -1;
str++;
}

while(*str >= '0' && *str <= '9'){
result = result * 10 + (*str - '0');
str++;
}
return (sign*result);
}
int main(){
int xs = ft("   ----+---+1234ab567");
printf(" %d", xs);
return 0;
}

