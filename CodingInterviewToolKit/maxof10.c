#include<stdio.h>
void main()
{
    int *a;
    int n,i,max;
    printf("how many numbers?");
    scanf("%d",&n);
    printf("Enter the %d numbers",n);
    
    //store 10 numbers in array a
    for(i=0;i<n;i++)
      scanf("%d",a+i);
    printf("\narray ele");
    for(i=0;i<n;i++)
       printf("%d\t",*(a+i));
    max=*(a+0);
    for(i=1;i<n;i++)
    {
         if(max<*(a+i))
          {
              max=*(a+i);
          } 

    }
    printf("Max is %d",max);  
    return;
}//end main()