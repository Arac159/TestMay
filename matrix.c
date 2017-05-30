#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

struct Matrix* Matrix_create(size_t nRows, size_t nColumns)
{
    struct Matrix *axb = calloc(1, sizeof(struct Matrix));
    int **rowarr = calloc(nRows, sizeof(int *));
    int i = 0;
    for (i = 0; i < nRows; i++)
    {
        rowarr[i] = calloc(nColumns, sizeof(int));
    }
    axb->columns = nColumns;
    axb->rows = nRows;
    axb->matrix = rowarr;
    
    return axb;
}

void Matrix_destroy(struct Matrix* matrix)
{
    int **rowarr = matrix->matrix;
    int i = 0;
    for (i = 0; i < matrix->rows; i++)
    {
        free(rowarr[i]);
    }
    free(rowarr);
    free(matrix);
}
