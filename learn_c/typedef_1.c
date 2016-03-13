#include <stdio.h>

typedef struct{
float tank_capacity;
int tank_psi;
const char *suit_meterial;
} equipment;

typedef struct scuba{
const char *name;
equipment kit;
} diver;

void badge(diver d){
printf("Name:%s\nTank:%2.2f(%i) suit:%s\n",
d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_meterial);
}
int main(){
diver randy = {"Randy",{5.5,3500,"Neoprene"}};
badge(randy);
}
