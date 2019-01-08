/*You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in list. 
One of the integers is missing in the list. Write an efficient code to find the missing integer.*/

#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0,sum1=0,mng;
	printf("How many number you want to add?\n");
	scanf("%d",&n);
	sum1=n*(n+1)/2;
	printf("The sum is %d\n",sum1);
	printf("Enter the array elements\n");
	for(i=1;i<=n-1;i++){
		printf("Enter element %d\n",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum of given elements is %d\n",sum);
	mng=sum1-sum;
	printf("The missing element is %d",mng);
}
