#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <ctype.h>

#define TRUE 1
#define FALSE 0


//int gValue(char);
int gValue(char c) {
    if (isalpha(c)) {
        int ans = tolower(c);
        return ans - 96;
    }
    return 0;
}


void Gematria(char word[], char text[]) {
    char str[7000] = "Gematria Sequences: ";
    int first_seq = TRUE;
    int letter_g = 0;
    for (int i = 0; i < strlen(word); ++i) {
        letter_g += gValue(word[i]);
    }
    int g_sum = 0;
    int j = 0;
    unsigned long str_index = strlen(str), total_string_len = strlen(text) + strlen(str);
    for (int i = 0; i < total_string_len;) {
        if(!isalpha(text[i])) {
            i++;
            continue;
        }
        if (g_sum + gValue(text[j]) < letter_g || !isalpha(text[j])) {
            g_sum += gValue(text[j]);
            j++;
        } else if (g_sum + gValue(text[j]) == letter_g) {
            g_sum += gValue(text[j]);
            if (!first_seq) {
                str[str_index ++] = '~';
            }
            for (int k = i; k <= j; ++k) {
                str[str_index ++] = text[k];
                first_seq = FALSE;
            }
            j++;
        } else {
            g_sum -= gValue(text[i]);
            i++;
        }
    }
    printf("%s\n", str);
}

void Atbash(char letter[], char text[]) {

}