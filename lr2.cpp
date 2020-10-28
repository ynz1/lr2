#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int order, c, d, matrix[10][10], transpose[10][10]; // объявление переменных и массива

    printf("vvedite poryadok matrici:\n"); 
    scanf_s("%d", &order); // ввод порядка матрицы
    printf("vvedite elementi matrici:\n");

    for (c = 0; c < order; c++) // генерация и ввод значений матрицы
        for (d = 0; d < order; d++)
            scanf_s("%d", &matrix[c][d]);

    printf("ishodnaya matrica:\n"); // вывод исходной матрицы

    for (c = 0; c < order; c++) { 
        for (d = 0; d < order; d++)
            printf("%d\t", matrix[c][d]);
        printf("\n");
    }

    for (c = 0; c < order; c++) // генерация транспонированной матрицы
        for (d = 0; d < order; d++)
            transpose[d][c] = matrix[c][d];

    printf("transponirovanaya matrica:\n");

    for (c = 0; c < order; c++) { // вывод новой матрицы
        for (d = 0; d < order; d++)
            printf("%d\t", transpose[c][d]);
        printf("\n");
    }

    return 0;
}