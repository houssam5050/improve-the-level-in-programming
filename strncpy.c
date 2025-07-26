void *ft(char*dest, char*src, unsigned int n){
int i = 0;

while(i < n){

dest[i] = src[i];

i++;
}

dest[i] = '\0';

return dest;
}
