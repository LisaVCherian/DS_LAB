#include <stdio.h>

void print_sparse(int d[10][10], int t[][3], int m, int n)
{
	t[0][0]=m;
	t[0][1]=n;
	int i,j,v=1,w=0;

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if(d[i][j]!=0)
			{
				t[v][0]=i;
				t[v][1]=j;
				t[v][2]=d[i][j];
				v++; w++;
			}
	}
	t[0][2]=w;

	printf("\n\trow\tcol\tval\n");

    for (i = 0; i < v; ++i)
    {
        for (j = 0; j < 3; ++j)
        	printf("\t%d", t[i][j]);
		printf("\n");
	}
}
 
void main ()
{
    int matrix[10][10], t[50][3];
    int i, j, m, n;
    float sparse_counter = 0;
	float sparsity;
 
	printf("\nEnter the no. of rows in the matrix: ");
	scanf("%d",&m);
	printf("Enter the no. of columns in the matrix: ");
	scanf("%d",&n);
    printf("Enter the elements of the matix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                ++sparse_counter;
            }
        }
    }

    printf("The matrix is:\n");

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        	printf("%3d", matrix[i][j]);
		printf("\n");
	}

    if (sparse_counter > ((m * n) / 2))
	{
        printf("\nThe given matrix is Sparse Matrix\n");
  	  	printf("There are %.0f number of Zeroes\n", sparse_counter);
		sparsity = sparse_counter/(m*n);
		printf("Sparsity is %.2f\n\n", sparsity);
		print_sparse(matrix, t, m, n);
	}
    else
        printf("\nThe given matrix is not a Sparse Matrix\n");

}
