#include <stdio.h>

int main(){
char msg[] = "Don't call me";
skip(*msg);
}
void skip(char *msg){
puts(msg);
}
