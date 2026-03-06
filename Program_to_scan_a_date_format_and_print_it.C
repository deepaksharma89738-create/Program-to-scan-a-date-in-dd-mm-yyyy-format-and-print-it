/*Program to scan a date format and print it */
#include<stdio.h>

int main()
{
	int day,month,year;
    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%2d/%2d/%4d", &day,&month,&year);
    printf("The date is %02d/%02d/%04d",day,month,year);
    return 0;
}