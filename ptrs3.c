// Array of pointers in a string
#include<stdio.h>
#include<alloc.h>
#include<string.h>
void main()
{
    char *name[6],n[50];
    int len,i;
    char *ptr;

    for(i=0;i<=5;i++)
    {
        printf("\n Enter name :");
        scanf("%s",n);
        len = strlen(n);
        ptr = malloc(len+1);
        strcpy(ptr,n);
        name[i] = ptr;
    }
}