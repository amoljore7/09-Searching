#include<stdio.h>
#include<malloc.h>

int Linear_Unsorted_Search(int arr[],int size,int data)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		if(arr[i] == data)
			return i;	
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

pos = Linear_Unsorted_Search(p,size,element);

printf("Element is found at position %d",pos);

return 0;
}