    //
// Created by Administrator on 9/22/2023.
//
#include <stdio.h>
void main(){
    float M1, M2, M3;
    printf("M1");
    scanf("%f",&M1);
    printf("M2");
    scanf("%f",&M2);
    printf("M2");
    scanf("%f",&M3);
    float avg = (M1+M2+M3)/3;
    printf("%f");
    scanf("avg",&avg);
    if (avg>=90 && avg<50) {
        if (avg >= 90)
            printf("E+");
        else if (avg < 90 || avg > 80)
            printf("E");
        else if (avg < 80 || avg > 70)
            printf("A+");
        else if (avg < 70 || avg > 60)
            printf("A");
        else if (avg < 60 || avg > 50)
            printf("B+");
        else if (avg < 50)
            printf("Rot");
    }
}