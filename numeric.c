#include <unistd.h>
int ft(char*str){

if(str[0] == '\0'){
return 1;
}

int i = 0;
while(str[i] != '\0'){

if(!(str[i] >= '0' && str[i] <= '9')){
return 0;
}
i++;
}
return 1;
}
