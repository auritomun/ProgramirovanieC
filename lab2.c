#include <stdio.h>

int lab2(void){
    //Задача 1
    double matrx[4][4];
    printf("Введите 9 значений матрицы 3x3\n\n");
    for (int i = 1; i < 4; i++){
        for (int j = 1; j < 4; j++){
            printf("Введите [%d][%d]: ", i, j);
            scanf("%lf", &matrx[i][j]);
        }
    }
    printf("Сумма значений матрицы на главной диагонали: %lf\n",matrx[1][1]+matrx[2][2]+matrx[3][3]);
    printf("Сумма значений матрицы на побочной диагонали: %lf\n\n",matrx[1][3]+matrx[2][2]+matrx[3][1]);
    
    //Задача 2
    int matrx2[3][3];
    printf("Введите 4 значений матрицы 2x2\n\n");
    for (int a = 1; a < 3; a++){
        for (int b = 1; b < 3; b++){
            printf("Введите [%d][%d] ",a,b);
            scanf("%d",&matrx2[a][b]);
        }
    }
    printf("\nКвадрат матрицы:\n [%d] [%d] \n [%d] [%d] \n\n", matrx2[1][1]*matrx2[1][1]+matrx2[1][2]*matrx2[2][1],matrx2[1][1]*matrx2[1][2]+matrx2[1][2]*matrx2[2][2],matrx2[2][1]*matrx2[1][1]+matrx2[2][2]*matrx2[2][1],matrx2[2][1]*matrx2[1][2]+matrx2[2][2]*matrx2[2][2]);
}

