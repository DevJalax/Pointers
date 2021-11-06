// Array pointers or pointers that point array
#include<stdio.h>
void main()
{
 int s[4][2] = {{1,2},{3,4},{5,6},{7,8}};
 int (*ptr)[2]; //ptr is pointer to 2D array S
 int p1,i,j;
 for(i=0;i<=3;i++)
 {
     ptr=&s[i];
     p1 = ptr;
     for(j=0;j<=1;j++)
     {
         printf("%d",*(p1+j));
     }
 }
}
