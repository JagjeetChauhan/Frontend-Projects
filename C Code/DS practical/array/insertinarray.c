#include <stdio.h>

int main()
{
	int arr[100];
	int i, x, pos, n;
    
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element at %dth position : ",i);
        scanf("%d",&arr[i]);
    }
    
	

    printf("Enter the element to be inserted: ");
    scanf("%d",&x);

	printf("Enter the position at which you want to insert the element: ");
	scanf("%d",&pos);
	
	printf("Original Array: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	n++;

	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = x;
	
	
    
    printf("Updated Array: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
