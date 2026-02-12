/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* arr1 = (int*)malloc(2*numsSize*(sizeof(int)));

    for(int i=0 ; i<numsSize ; i++){
        arr1[i]=nums[i];
        arr1[i + numsSize] = nums[i];
    } 

    *returnSize = 2*numsSize ;

    return arr1;
}