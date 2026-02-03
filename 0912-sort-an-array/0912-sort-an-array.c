
#include <stdio.h>

void merge(int* nums, int left, int mid, int right, int* temp) {
    int i = left;      
    int j = mid + 1;   
    int k = left;   

    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = nums[i++];
    }

    while (j <= right) {
        temp[k++] = nums[j++];
    }

    for (i = left; i <= right; i++) {
        nums[i] = temp[i];
    }
}

void solve(int* nums, int left, int right, int* temp) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    solve(nums, left, mid, temp);
    solve(nums, mid + 1, right, temp);
    
    merge(nums, left, mid, right, temp);
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    
    int temp[numsSize]; 
    
    solve(nums, 0, numsSize - 1, temp);
    
    return nums;
}