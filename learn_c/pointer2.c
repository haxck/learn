#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main(void){
char s[]="string";
char *p=s;
for(int i = 0;i<strlen(s);i++){
printf("\ns[%d]=%c *(p+%d)=%c &s[%d]=%p p+%d =%p",i,s[i],i,*(p+i),i,&s[i],i,p+i);
}
return 0;
}
