#include <stdio.h>
#include <math.h>

int main(){

double a , b, c ;

printf("enter the value of a : ");
scanf("%lf" , &a);

printf("enter the value of b :");
scanf("%lf" , &b);

if (a <= 0 || b <= 0)

{printf("\nerror : ngl lil bro you need to study some maths");

return 1;}

else{

c = sqrt(pow(a, 2) + pow(b, 2));

printf("\nthe result lil bro is : %.3lf", c);

return 0;}
}