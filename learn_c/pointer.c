#include <stdio.h>
int main(){
	char multiple[] = "My string";
	char *p = &multiple[0];
	printf("\nThe address of the first array element:%p",p);

	p = multiple;
	printf("\nThe address obtained from the attay name:%p\n",p);
	return 0;
}
