#include <stdio.h>

void binary_search(int arr[], int n, int x){
	int f=0,l=n-1,flag=0;
	int m;
	while(f<l){
		m=(f+l)/2;
		if(arr[m]==x){
			printf("Element found at index = %d\n", m);
			flag=1;
			break;
		}
		else if(arr[m]<x)
			f=m+1;
		else
			l=m-1;
	}
	if(!flag)
		printf("Element not found\n");
}

int main(){
	int n,x,i;	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in ascending order: \n");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("Enter the  element to search: ");
	scanf("%d",&x);
	binary_search(arr,n,x);
}	
