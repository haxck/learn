#include <stdio.h>

int main()
{
int x=0,y=0;
while(x<6){
	y=x+y;
	printf("%i%i",x,y);
	x = x+1;
}
return 0;
}
