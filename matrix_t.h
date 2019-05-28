/*

	types and functions header for matrix_t

*/


#ifndef MATRIX_T_DEF

#define MATRIX_T_DEF

typedef struct
{
	void* data;
	int dim[2];
} matrix_t;

void free_matrix( matrix_t mat );
int init_matrix( matrix_t* mat, void* data, const unsigned int dim[2] );

#endif
