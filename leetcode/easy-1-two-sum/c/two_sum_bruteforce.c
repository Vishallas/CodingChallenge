#include<stdio.h>
#include<stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *ans = (int*)malloc(sizeof(int)*2);
    for(int i = 0;i<numsSize-1;i++){
        for(int j =1;j<numsSize;j++){
            if(i != j && nums[i]+nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}