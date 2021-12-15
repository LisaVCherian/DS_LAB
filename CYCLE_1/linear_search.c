#include<stdio.h>
void main()
{
	int A[10],i,n, ele, flag=0;
	printf("\nEnter the size: ");
	scanf("%d", &n);
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	printf("Enter the element to be found:");
	scanf("%d", &ele);
	for(i=0; i<n; i++)
		{
		if(A[i] == ele)
			{flag = 1;
			break;}
		}
	if(flag==1)
		printf("Element found at index %d\n\n", i+1);
	else
		printf("Element not found\n\n");
}
