#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_of_main_dioganal(int matrix[][5], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

int main()
{
    int matrix[5][5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] =  rand() % 10;
        }
    }

    printf("input data:\n");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("output data:\n");
    printf("%d\n", sum_of_main_dioganal(matrix, 5));

    return 0;
}

