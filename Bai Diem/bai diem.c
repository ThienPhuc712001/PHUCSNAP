#include <stdio.h>
int main() {
    int count =0;
    float total =0;
    char choice;
    char subject[50];
    float score;

    do {
        printf("Nhap ten mon hoc:");
        scanf("%s",subject);
        printf("Nhap diem:");
        scanf("%f", &score);
        total += score;
        count++;
        printf("Ban co muon tiep tuc hay khong? (y/n):");
        scanf(" %c", &choice);

    } while (choice == 'y'|| choice == 'Y');

    if(count >0) {
        double average = total / count;
        printf("Diem trung binh cua ban la:%.2lf\n", average);
    } else {
        printf("Khong co muon hoc nao duoc nhap diem.\n");
    }
    return 0;
    }
//
// Created by Administrator on 9/27/2023.
//
