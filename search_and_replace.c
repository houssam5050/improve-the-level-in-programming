#include <unistd.h>
int main(int argc, char **argv){
int i = 0;

if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0'){

while(argv[1][i]){
if(argv[1][i] == argv[2][0]){
write(1, &argv[3][0], 1);
}else{
write(1, &argv[1][i], 1);
}
i++;
}
}

write(1, "\n", 1);

return 0;
}

