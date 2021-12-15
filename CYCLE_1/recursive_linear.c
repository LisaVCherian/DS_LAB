#include<stdio.h>
int elmntSrch(int arr[], int size, int x) {
    int rec;
 
    size--;
 
    if (size >= 0) {
        if (arr[size] == x)
            return size;
        else
            rec = elmntSrch(arr, size, x);
    }
    else
        return -1;
}
 
int main(void) 
{
	int arr[10],i,size, ele, indx;
	printf("\nEnter the size: ");
	scanf("%d", &size);
	printf("Enter array elements:\n");
	for(i=0; i<size; i++)
		scanf("%d", &arr[i]);
	printf("Enter the element to be found:");
	scanf("%d", &ele);

    indx = elmntSrch(arr, size, ele);
 
    if (indx != -1)
        printf("Element %d is present at index %d\n\n", ele, indx+1);
    else
        printf("Element %d is not present\n\n", ele);
 
    return 0;
}
