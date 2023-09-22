//
// Created by Administrator on 9/22/2023.
//
#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a lower cased alphabet (a - x):");
    scanf("%c", &ch);

    if (ch< 'a'|| ch > 'z')
        printf("\nCharacter not a lower cased alphabet");
    else
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nCharacter is a vowel");
                break;

            case 'z':
                printf("\nLast Alphabet (z) was entered");
                break;

            default:
                printf("\nCharacter is a consonant");
                break;       }
}
