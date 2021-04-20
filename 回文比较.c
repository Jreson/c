#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int n=strlen(arr);
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[j]!=arr[i])
        {
           printf("此数不是回文\n");
           break;
        }
        i++;j--;
    }
    if(i>=j)
    {
       printf("此数是回文\n");
    }    
}