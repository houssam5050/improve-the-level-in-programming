#include <stdio.h>
char *ft(char*str, char*find){

int i = 0;
int j = 0;

if(*find == '\0')
return str;

while(str[i] != '\0'){
j = 0;


while(str[i + j] == find[j] && find[j] != '\0'){
j++;

}
if(find[j] == '\0'){
return &str[i];
}
i++;
}

return  0;
}
int main(){
char str1[] = "hello bad world";
char str2[] = "bad";
char*result = ft(str1, str2);
if(result != 0)
printf("found: %s\n", result);
else
printf("not found");

return 0;
}
