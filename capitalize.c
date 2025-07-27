#include <stdio.h>
char *ft(char*str){
int i = 0;

while(str[i] != '\0'){

if(str[i] >= 65 && str[i] <= 90){
str[i] = str[i] + 32;
}
i++;
}
if(str[0] >= 97 && str[0] <= 122){
str[0] = str[0] - 32;
}
i = 1;
while(str[i] != '\0'){

if(!(str[i-1] >= '0' && str[i-1] <= '9')){
if(!(str[i-1] >= 'A' && str[i-1] <= 'Z')){
if(!(str[i-1] >= 'a' && str[i-1] <= 'z')){
if(str[i] >= 'a' && str[i] <= 'z'){
str[i] = str[i] - 32;
}
}
}
}
}

}


