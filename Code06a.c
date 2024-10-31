#include<stdio.h>

void main()

{

float V,S,u,a,t;
printf("u=");
scanf("%f",&u);
printf("a=");
scanf("%f",&a);
printf("t=");
scanf("%f",&t);

V=u+a*t;
S=u*t+0.5*a;

printf("V=u+at");
printf("\nS=ut+1/2a");
printf("\nV=%f",V);
printf("\nS=%f",S);

}
