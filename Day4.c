#include<stdio.h>

int main()
{
  	int arr[10], Size, i, Search, Flag;
  
  	printf("Enter the Array Size:  ");
  	scanf("%d",&Size);
 
  	printf("Enter the Array: \n", Size);
  	for(i = 0; i < Size; i++)
   	{
   	 	scanf("%d",&arr[i]);
   	}
	printf("Enter element to be searched:  ");
  	scanf("%d",&Search);      
 
  	Flag = 0;
  	for(i = 0; i < Size; i++)
   	{
   		if(arr[i] == Search)
     	{
       		Flag = 1;
       		break;
	 	}   
   	}
  	if(Flag == 1)
  	{
  		printf("The Element %d is present in index %d ", Search, i);
	}
	else
	{
		printf("Search Element %d not found ", Search);
	}	
  	return 0;
}