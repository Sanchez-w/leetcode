#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (*(nums + i) + *(nums + j) == target) {
                *result = i;
                *(result + 1) = j;
                *returnSize = 2;
                return result;
                break;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int numsSize = 10000;
    int nums[numsSize];
    for (int i = 1; i < 10001; i++) {
        nums[i - 1] = i;
    }
    int target = 19999;
    int* output = NULL;
    // 不要访问一块没有初始化的内存
    // int* outputSize = NULL;
    int* outputSize = (int*)malloc(sizeof(int));
    output = twoSum(nums, numsSize, target, outputSize);
    for (uint8_t i = 0; i < *outputSize; i++) {
        printf("%d\n", output[i]);
    }
    free(output);
    free(outputSize);
    return 0;
}
