// Array of pointers
#include<stdio.h>
void main()
{
    int *a[4];
    int i=2,j=3,k=4,l=5,lo;
    a[0] = &i;
    a[1] = &j;
    a[2] = &k;
    a[3] = &l;
    for(lo=0;lo<4;lo++)
    {
        printf("%d",a[lo]);
    }
}