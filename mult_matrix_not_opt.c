#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define N 128
#define COLUNAS_MATRIX_UM 128
#define COLUNAS_MATRIX_DOIS 128
#define LINHAS_MATRIX_UM 128

void main()
{
    int matrix_um[N][N];
    int matrix_dois[N][N];
    int resultado[N][N];

    // Inicialização das matrizes com valores aleatórios.
    for (int i = 0; i < LINHAS_MATRIX_UM; i++)
    {
        for (int j = 0; i < LINHAS_MATRIX_UM; i++)
        {
            matrix_um[i][j] = i + j * 2;
            matrix_dois[i][j] = j - i * 4;
        }
    }

    for (int i = 0; i < LINHAS_MATRIX_UM; ++i)
    {
        for (int j = 0; j < COLUNAS_MATRIX_DOIS; ++j)
        {
            for (int k = 0; k < COLUNAS_MATRIX_UM; ++k)
            {
                resultado[i][j] += matrix_um[i][k] * matrix_dois[k][j];
            }
        }
    }
}
