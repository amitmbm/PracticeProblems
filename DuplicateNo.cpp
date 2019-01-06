#include<stdio.h>
main()
{
	int a[100],i,j,n,ctr=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("element %d\n",i);
		scanf("%d",&a[i]);
		}
		printf("\n");
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
				
				ctr++;
				break;}
			}
		}
		printf("duplicate elements = %d",ctr);
	}
	
