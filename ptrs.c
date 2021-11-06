#include<stdio.h>
void main()
{
  /* access 2D array using pointers */

  int s[4][2] = {{1,2},{3,4},{5,6},{7,8}};
  int i,j;
  for(i=0;i<=3;i++)
  {
    printf("\n");
    for(j=0;j<=1;j++)
    {
        printf("%d",*(*(s+i)+j));
    }
  }
}