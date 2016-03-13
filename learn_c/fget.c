#include <stdio.h>
//fget(变量名，大小，标准输入类型)
//                   stdin,stdout,stderr
int main(){
char food[5];
printf("Enter favorite food:");
fgets(food,sizeof(food),stdin);
printf("You input :%s",food);
printf("Enter favorite food:");
scanf("%10s",food);
printf("You input :%s",food);

}
