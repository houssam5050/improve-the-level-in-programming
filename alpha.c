#include <unistd.h>
int ft(char*str){

if(str[0] == '\0'){
return 1;
}

int i = 0;
while(str[i] != '\0'){

if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))){
return 0;
}
i++;
}
return 1;
}

