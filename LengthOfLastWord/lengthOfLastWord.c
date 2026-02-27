#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char* s) {
    int count = 0;
    int len = strlen(s);
    char* p = s + len;
    if (s[len - 1] == ' ') {
        while (p --> s && *p == ' ') {
        }
        p++;
        while (p --> s && *p != ' ') {
            count++;
        }
    } else {
        while (p --> s && *p != ' ') {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char* string1 = "Hello World";
    char* string2 = "   fly me   to   the moon  ";
    char* string3 = "luffy is still joyboy";
    char* string4 = "a";
    char* string5 = "a ";
    char* string6 = "qwertyqwerty";
    printf("%d\n", lengthOfLastWord(string1));
    printf("%d\n", lengthOfLastWord(string2));
    printf("%d\n", lengthOfLastWord(string3));
    printf("%d\n", lengthOfLastWord(string4));
    printf("%d\n", lengthOfLastWord(string5));
    printf("%d\n", lengthOfLastWord(string6));
    return 0;
}
