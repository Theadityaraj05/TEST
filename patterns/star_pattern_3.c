/*
* 
* *
* * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows (*)");
    scanf("%d",&n);
    
    for(int i=1; i<n+1; i++)
    {
         for(int j=0;j<i;j++){
            printf("* ");
    }
    printf("\n");
 }   
    for(int p=n; p>0; p--)
    {
         for(int l=p;l>1;l--){
            printf("* ");
    }
    printf("\n");
}

return 0;
}