- name: Configure project
  run: cmake .

#include <unistd.h>
void ft_put(char*str){
int i = 0;

while(str[i] != '\0'){

char x = str[i];
write(1, &x, 1);
i++;
}
}

int main(){
char str[] = "hello world";

ft_put(str);
return 0;
}

