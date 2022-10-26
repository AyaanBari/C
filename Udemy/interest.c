#include <stdio.h>

int main(){

double rate=0.0600;
int duration;
double principal_amount;
double total_interest;
printf("Enter duration in year");
scanf ("\n%d",&duration);
printf("enter principle amount");
scanf ("\n%lf",&principal_amount);
total_interest=(principal_amount*duration*rate);
printf("Your total payable interest is %lf when principal_amount given as %lf, duration is %d",total_interest,principal_amount,duration);



	return 0;

}