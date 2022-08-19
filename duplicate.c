#include<stdio.h>

bool containsDuplicate(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;i<numsSize;j++)
        {
            if(nums[i]==nums[j])
                return true;
            else
                return false;
        }
    }
}
int main()
{
   // int nums={1,3,4,5};
   // int* nums=nums;
   
    containsDuplicate(nums[], 4);
    printf("output:",containsDuplicate(nums[], 4););
}