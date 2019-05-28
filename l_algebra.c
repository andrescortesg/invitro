/*
LINEAR ALGEBRA BASIC OPERATIONS FOR MATRIX

PHASE 1: secuential operations
PHASE 2: parallel operations
PHASE 3: CUDA operations

Type used for the maths: float (for the moment)
*/


#include <stdio.h>
#include <stdlib.h>
#include "matrix_t.h"

matrix_t init_rand_matrix( unsigned int seed, unsigned int* dim )
{
/*
	initializes a matrix/vector with pseudo random numbers with a seed

*/
	matrix_t mat;
	int i;
	srand( seed );
	float* data = malloc( dim[0] * dim[1] * sizeof(float) );	

	for( i = 0; i < dim[0] * dim[1]; i++ )
	{
		data[i] = rand() % 50;		
	}
	
	init_matrix( &mat, data, dim );

	return( mat );
}

void print_matrix( matrix_t mat )
{
/*
	for a mxn matrix, in an array of m*n spaces, needs of a formula to get its columns and rows correctly to print (and other operations)
	for a row-wise print use:
		n*i + j
	where i, j are indexes, and n is the second dimension of the matrix

	for a column-wise acces use:
		m*j + i

*/
	int i, j;
	for( i = 0; i < mat.dim[0] ; i++ )
	{
		for( j = 0; j < mat.dim[1]; j++ )
		{
			printf(" %f", ( (float*) mat.data )[ ( mat.dim[1] * i ) + j ] );
		}
		printf("\n");
	}
	return;

}
