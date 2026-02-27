#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // int* output = (int*)calloc(sizeof(int), digitsSize);
    // output = digits;
    *returnSize = digitsSize;
    return digits;
    int number = 0;
    while (digitsSize --> 0) {
        number = digits[digitsSize] * 10 + number;
    }
}

int main(void)
{
    int array1[] = {1,2,3};
    int array2[] = {4, 3, 2, 1};
    int array3[] = {9};
    int outputSize = 0;
    int* output = plusOne(array1, 3, &outputSize);
    for (uint8_t i = 0; i < outputSize; i++) {
        printf("%d\n", output[i]);
    }
    return 0;
}
