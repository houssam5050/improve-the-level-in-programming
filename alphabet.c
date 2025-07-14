#include <unistd.h>
int main(int argc, char**argv){
int i = 0;
int rp;

if(argc == 2){
while(argv[1][i]){

char c = argv[1][i];

if(c >= 'a' && c <= 'z')
rp = c - 'a' + 1;
else if(c >= 'A' && c <= 'Z')
rp = c - 'A' + 1;
else
rp = 1;

while(rp--)
write(1, &c, 1);
i++;

}
}
write(1, "\n", 1);

return 0;
}
