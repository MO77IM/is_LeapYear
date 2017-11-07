#include <stdio.h>
bool is_LeapYear(int year);
int main(void){
	int year;
	printf("Please input a year, and I will tell you if it is a leap year.\n");
	printf("Year:");
	while(scanf("%d", &year)!=1)
	{
		printf("You need to input a positive integer!\n");
		while(getchar()!='\n')
		  ;
	}
	if(is_LeapYear(year))
	  printf("It is a leap year!\n");
	else
	  printf("It's not a leap year.\n");
	getchar();
	getchar();
	return 0;
}

bool is_LeapYear(int year){
	return ((year%4==0&&year%100!=0)||year%400==0);
}
