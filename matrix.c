/*
a matrix definition

two dimentional (2D) definition of a matrix

e.g: a { 2, 1 } dim matrix would be a vector of two elements
*/

#include <stdio.h>
#include <stdlib.h>
#include "matrix_t.h"

static int error_hand( matrix_t mat )
{

/*
	error handling with values 

*/
	//NULL value in data: 1
	if( mat.data == NULL )
	{
		fprintf( stderr, " ERROR: null value in the data pointer\n");
		return( 1 );
	}
	//zero dimensions in arguments: 2
	if( mat.dim[0] == 0 || mat.dim[1] == 0  )
	{
		fprintf( stderr, " ERROR: non valid values for the dimensions of a matrix\n");
		return( 2 );
	}
	// no errors: 0 	
	return(0);
}

int init_matrix( matrix_t* mat, void* data, const unsigned int* dim )
{
/*
	assign values and data pointer to their respective spaces
	data: a pointer to a matrix (m, n) or vector (m, 1)
	dim: dimensions, expressed in an array
	returns an error handler value
*/
	mat->data = data;
	mat->dim[0] = dim[0];
	mat->dim[1] = dim[1];
	return( error_hand( *mat ) );	
}

void free_matrix( matrix_t mat )
{
	free( mat.data );
}

