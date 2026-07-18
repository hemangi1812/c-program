#include<stdio.h>
int main(){

int i;
float  f;
char ch;
double d;
printf("enter int value");
scanf("%d",&i);
printf("int value is %d",i);

printf("\nenter flaot value");
scanf("%f",&f);
printf("float value is %f",f);

printf("\nenter char value");
scanf(" %c",&ch);
printf("char value is %c",ch);

printf("\nenter double value");
scanf("%lf",&d);

printf("double value is %lf",d);

}