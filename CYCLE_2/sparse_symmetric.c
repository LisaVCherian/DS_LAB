#include <stdio.h>

struct matrix{
	int row;
	int col;
	int val;
};

void readMatrix(struct matrix m[]){
	int i,j,k=1,temp,count=0;
	printf("Enter the no of rows in the matrix: ");
	scanf("%d",&m[0].row);
	printf("Enter the no of columns in the matrix: ");
	scanf("%d",&m[0].col);
	printf("Enter the elements in the array:\n");	
	for(i=0;i<m[0].row;i++){
		for(j=0; j<m[0].col;j++){
			scanf("%d", &temp);
			if(temp!=0){
				m[k].row=i;
				m[k].col=j;
				m[k++].val=temp;
				count+=1;
			}
		}
	}
	m[0].val=count;
}

void printMatrix(struct matrix m[]){
	int i;
	printf("\n\n\trow\tcol\tval\n");
	for(i=0;i<m[0].val+1;i++)
		printf("\t%d\t%d\t%d\n",m[i].row,m[i].col,m[i].val);
	printf("\n\n\n");
}

void transposeMatrix(struct matrix m[], struct matrix res[]){
	res[0].row = m[0].col; 
    res[0].col = m[0].row;
    res[0].val = m[0].val; 
    int i, j, k = 1;
    for (i = 0; i <= m[0].col; i++){
        for (j = 1; j <= m[0].val; j++){
            if (m[j].col == i){
                res[k].row = m[j].col;
                res[k].col = m[j].row;
                res[k].val = m[j].val;
                k++;
            }
        }
    }
}

int checkSymmetry(struct matrix m1[], struct matrix m2[]){
	int flag=1;	
	int i;
	if(m1[0].val==m2[0].val){
		for(i=1;i<m1[0].val+1;i++){
			if(m1[i].row!=m2[i].row || m1[i].col!=m2[i].col || m1[i].val!=m2[i].val){
				flag=0;
				break;
			}
		}
	}
	return flag;
}

int main(){
	struct matrix m[100],res[100];
	int flag = 0;
	printf("\nEnter details of the matrix\n");
	readMatrix(m);
	transposeMatrix(m,res);
	flag = checkSymmetry(m,res);
	if(flag == 1)
		printf("Sparse symmetric\n\n");
	else
		printf("Not sparse symmetric\n\n");
}
