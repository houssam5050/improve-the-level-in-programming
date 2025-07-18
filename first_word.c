#include <unistd.h>
void str(char c){

write(1, &c, 1);
}

int main(int argc, char **argv){
int i = 0;

if(argc != 2){
str('\n');
return 0;
}

while(argv[1][i] == ' ' || argv[1][i] == '\t')
i++;

if(argv[1][i] == '\0'){
str('\n');
return 0;
}

while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0'){
str(argv[1][i]);
i++;
}

str('\n');

return 0;
}

