/*
 main function file

*/

#include <stdio.h>
#include <stdlib.h>
#include "l_algebra_h.h"

int main( void )
{
	matrix_t mat;

	unsigned int dim[2] = { 3, 1};
	mat = init_rand_matrix( 2, dim );	

	print_matrix( mat );
	free_matrix( mat );
}
