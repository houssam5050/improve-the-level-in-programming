char *ft(char*str){
int i = 0;

while(str[i] != '\0'){

str[i] = str[i] - 32;
i++;
}
return str;
}
