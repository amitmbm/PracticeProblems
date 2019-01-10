/* Program to identify missing numbers in a given array using bitwise operation */
#include <stdio.h>
int main()
{
    int n,i,c=1,b,a[100];
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for (i = 0; i < n - 1; i++)    
    scanf("%d", &a[i]);
    b =a[0];
    for (i=1;i<n-1;i++)
    b = b ^ a[i];
    for (i =2; i <= n; i++)
    c = c ^ i; 
    printf("Missing element is : %d \n", b^c);
}
