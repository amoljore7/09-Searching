#include<stdio.h>
#include<malloc.h>

int Binary_Search(int arr[],int size,int data)
{
	int low = 0,mid=0,high = size-1;

	while(low <= high)
	{
		mid = low + (high - low)/2;
		
		if(arr[mid] == data)
			return mid;

		else if(arr[mid] < data)
			low = mid +1;

		else
			high = mid -1;
	}
	return -1;
}

int main()
{
	int *p = NULL;
	int size = 0,iCnt = 0,pos = 0,element = 0;

	printf("Enter number of elements you want to enter\n");
	scanf("%d",&size);

	p = (int*)malloc(sizeof(int)*size);

	printf("Enter elements of array\n");
	for(iCnt = 0;iCnt<size;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	printf("Enter element that you want to search\n");
	scanf("%d",&element);

	pos = Binary_Search(p,size,element);

	printf("Element is found at position %d",pos);

	return 0;
}