#include <stdio.h>

void binary_search(int arr[], int f, int l, int x){
	int m;
	if(f>l)
		printf("Element not found\n");
	else{
		m=(f+l)/2;
		if(arr[m]==x){
			printf("Element found at index = %d\n", m);
		}
		else{
		 	if(arr[m]<x)
				f=m+1;
			else
				l=m-1;
			binary_search(arr,f,l,x);		
		}
	}
}

int main(){
	int n,x,i;	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("Enter the  element to search: ");
	scanf("%d",&x);
	binary_search(arr,0,n-1,x);
	
}	
