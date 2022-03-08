#include<stdio.h>
int main()
{
  int i,j,k,n,l=0;
 printf("Enter the no of lines\n");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
    for(j=0;j<n-i;j++)
    printf(" ");
    k = i;
     for(j=1;j<=i;j++,k++)
    {
        printf("%d",k);
    }
    k--;
    for(j=1;j<i;j++)
    {  
    printf("%d",--k);
    }
        printf("\n");
    }
     for(i=n-1; i>=0; i--){   
        for(j=0; j<=l; j++)
    printf(" ");
    k=i;
         for(j=1; j<=i; j++,k++)                     
       printf("%d",k);
       k--;
for(j=i-1; j>=1; j--)                 
  printf("%d",--k);
     printf("\n");
    l++;
    }
   }
