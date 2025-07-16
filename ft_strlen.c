#include<stdio.h>
int len(char*str){
int x = 0;

while(str[x] != '\0'){
x++;
}
return x;
}
int main(){
char str[] = "hello everyone";
printf(" %d", len(str));
return 0;
}

