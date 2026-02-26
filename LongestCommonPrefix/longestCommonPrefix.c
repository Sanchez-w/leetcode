#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int count = 0;
    int flag = 0;
    for (uint8_t i = 0; i < 200; i++) {
        if (*(strs[0] + i) != '\0') {
            char temp = *(strs[0] + i); 
            for (uint8_t j = 1; j < strsSize; j++) {
                if (*(strs[j] + i) != temp) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                break;
            } else {
                count++;
            }
        } else {
            break;
        }
    }
    char* output = (char*)calloc(sizeof(char), count + 1);
    for (uint8_t i = 0; i < count; i++) {
        output[i] = *(strs[0] + i);
    }
    return output;
}

int main(void)
{
    char* strings1[] = {"flower","flow","flight"};
    char* strings2[] = {"dog","racecar","car"};
    printf("\"%s\"\n", longestCommonPrefix(strings1, 3));
    return 0;
}
