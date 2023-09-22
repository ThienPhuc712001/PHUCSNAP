//
// Created by Administrator on 9/20/2023.
//
/* Doi mot ky tu hoa thanh ky tu thuong */
#include <stdio.h>
void main()
{
    char c;
    printf("Please enter the character:");
    scanf("%c, &c");

    if(c>= 'A' && c<= 'Z')
        printf("Lowercase character = %c", c+ 'a'- 'A');
    else
        printf("Character Entered is = %c", c);
}