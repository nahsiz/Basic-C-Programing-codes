//Interest rate problem

#include<stdio.h>
int main(){

float principle,rate,time,interest;

printf ("Enter the principle : ");
scanf("%f",& principle);

printf ("Enter the rate : ");
scanf("%f",& rate);

printf ("Enter the time(year) : ");
scanf("%f",& time);

interest = (principle*rate*time)/100 ;

printf("The interest is: %.4f",interest );

return 0;

}
