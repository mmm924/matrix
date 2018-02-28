#ifndef matrix_h
#define matrix_h

typedef struct
{
    double **data;
    const int m; // #rows
    const int n; // #cols
} matrix;


// Initialization
matrix *matrix_create_empty(int m, int n);
matrix *matrix_create_va(int m, int n, ...);
matrix *matrix_create_zeros(int m, int n);
matrix *matrix_create_ones(int m, int n);

// Arithmetic
matrix *matrix_mult(const matrix *A, const matrix *B);
matrix *matrix_add(const matrix *A, const matrix *B);
matrix *matrix_copy(const matrix *A);

// Helpers
int matrix_same_order(const matrix *A, const matrix *B);
int matrix_can_mult(const matrix *A, const matrix *B);
int matrix_is_square(const matrix *A);
int matrix_eq(const matrix *A, const matrix *B);

// Functional
void matrix_map(matrix *A, double (*f)(double));
void matrix_fill(matrix *A, double v);

int matrix_eq(const matrix *A, const matrix *B);

void matrix_print(const matrix *M);
void matrix_free(matrix *M);

#endif
