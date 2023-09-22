//
// Created by Administrator on 9/20/2023.
//
#include <stdio.h>
void main()
{
    int num, res;

    printf("Enter a number:");
    scanf("%d, &num");
    res = num %2;

    if ( res==0)
        printf("The number is Even");
    else
        printf("The number is Odd");

}