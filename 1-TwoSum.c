/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int*num = (int*)malloc(sizeof(int)*2);
    
    for(int i = 0; i<numsSize ; i++)
    {
        for(int j = i+1; j<numsSize; j++)
        {
            if(nums[i]+nums[j] == target)
            {
                num[0]=i;
                num[1]=j;
                *returnSize =2;//返回的值的个数
                break;
                // return num;
            }
        }
    }
    
    return num;

}