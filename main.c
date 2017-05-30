#include <stdio.h>
#include "matrix.h"

int main(int argc, char *argv[])
{
    struct Matrix *first = Matrix_create(4, 4);
    int i = 0;
    int j = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", first->matrix[i][j]);

        }
        printf("\n");
    }
    Matrix_destroy(first);
    return 0;
}
