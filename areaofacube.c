//find the area of a cube

#include<stdio.h>
int main(){

float side,area ;

printf("Enter value of a side: ");
scanf("%f",& side);

area = (side*side*side) ; //Formula

printf("The cube area is : %.3f",area);

return 0 ;

}
