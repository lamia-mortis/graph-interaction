#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int n)
{
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            matrix[i][j] = 0;
        
    return matrix;
}


void delete_matrix(int **matrix, int n) 
{
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }

    free(matrix);
}

int* create_array(int l)
{
    int* arr = (int*)malloc(l * sizeof(int));

    for (int i = 0; i < l; i++)
        arr[i] = 0;

    return arr;
}


void delete_array(int * arr)
{
    free(arr);
}