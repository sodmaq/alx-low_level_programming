#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str) {
    int length = strlen(str);
    char *result = (char *)malloc(length + 1);

    for (int i = 0; i < length; i++) {
        int ch = str[i];
        int offset = (ch >= 'a' && ch <= 'z') ? 'a' : ((ch >= 'A' && ch <= 'Z') ? 'A' : 0);

        if (offset != 0) {
            ch -= offset;
            ch = (ch + 13) % 26;
            ch += offset;
        }

        result[i] = ch;
    }

    result[length] = '\0';

    return result;
}

