#include <stdio.h>

int main(){
struct preferences{
const char *food;
float exercise_house;
};
struct fish{
const char *name;
const char *species;
int teeth;
int age;
struct preferences care;
};

struct fish f = {"litfish","dotn",24,65,{"meat",7.5}};
printf("F name:%s\n F food:%s \n",f.name,f.care.food);

}
