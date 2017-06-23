#include<stdio.h>
int main()
{
  int a[7]={4,23,43,38,15,10,30};
  int i,j;
  for(i=1;i<7;i++)
   {
     int k=a[i];
     j=i-1;
     while(j>0 && a[j]>k)
     {
	a[j+1]=a[j];
	j--;
     }
    a[j+1]=k;
  
}

  printf("Sorted Array : \n"); 
  for(i=0;i<7;i++)
  {
    printf("%d\t",a[i]);
  }
}
