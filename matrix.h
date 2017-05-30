#pragma once

struct Matrix
{
    size_t rows;
    size_t columns;
    int **matrix;
};

struct Matrix* Matrix_create(size_t nRows, size_t nColumns);
void Matrix_destroy(struct Matrix* matrix);
