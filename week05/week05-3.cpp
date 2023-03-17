#include <stdio.h>
int removeDuplicates(int* nums, int numsSize)
int main()
{
    int a[10]={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicates(a,10);
    for(int i=0;i<k;i++)
    {
        printf("%d",a[i]);
    }
}
