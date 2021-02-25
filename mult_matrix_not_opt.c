#include <stdlib.h>
#include <stdio.h>


#define N 128
#define COLUNAS_MATRIX_UM 128
#define COLUNAS_MATRIX_DOIS 128
#define LINHAS_MATRIX_UM 128

int main()
{
    

    int **matrix_um = (int **)malloc(N * sizeof(int));
    int **matrix_dois = (int **)malloc(N * sizeof(int));
    int **resultado = (int **)malloc(N * sizeof(int)); 

    // Inicialização das matrizes com valores aleatórios.
    for (int i = 0; i < LINHAS_MATRIX_UM; i++)
    {
        matrix_um[i] = (int *)malloc(sizeof(int) * N);
        matrix_dois[i] = (int *)malloc(sizeof(int) * N);
        resultado[i] = (int *)malloc(sizeof(int) * N);
        for (int j = 0; j < LINHAS_MATRIX_UM; j++)
        {

            matrix_um[i][j] = i + j * 2;
            matrix_dois[i][j] = i + j * 10;
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

    for (int i = 0; i < LINHAS_MATRIX_UM; i++)
    {
        for (int j = 0; j < LINHAS_MATRIX_UM; j++)
        {
            printf("Posição da matrix [%d][%d] e valor %d\n", i, j, resultado[i][j]);
        }
    }
    printf("\n---------Multiplicação finalizada com sucesso--------");
    free(matrix_um);
    free(matrix_dois);
    free(resultado);
}
