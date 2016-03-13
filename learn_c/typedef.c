#include <stdio.h>

int main(){

typedef struct cell_phone{
int cell_no;
const char *wallpaper;
float minutes_of_charge;
} phone;

phone p={5557879,"ava.phg",1.25};
printf("phone number:%d\n",p.cell_no);
}
