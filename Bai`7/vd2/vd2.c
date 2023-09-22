//
// Created by Administrator on 9/20/2023.
//
#include <stdio.h>
void main()
{
    int year;

    printf("\n Please enter a year:");
    scanf("%d, &year");

    if(year % 4==0 && year % 100 !=0 || year %400 == 0)
        printf("\n%d is a leap year!",year);
}