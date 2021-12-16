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


void Gematria(char letter[], char text[]) {
    char str[7000] = "Gematria Sequences: ";
    int first_seq = FALSE;
    int letter_g = 0;
    for (int i = 0; i < strlen(letter); ++i) {
        letter_g += gValue(letter[i]);
    }
    for (int i = 0; i < strlen(text); ++i) {
        int g_sum = 0;
        for (int j = i; j < strlen(text); ++j) {
            g_sum += gValue(text[j]);
            if (g_sum == letter_g) {
                char temp[2024];
                for (int k = i; k <= j; ++k) {
                    if (first_seq) {
                        temp[strlen(str)] = '~';
                        str[strlen(str)] = temp[strlen(str)];
                        temp[strlen(str)] = text[k];
                        str[strlen(str)] = temp[strlen(str)];
                    } else {
                        temp[strlen(str)] = text[k];
                        str[strlen(str)] = temp[strlen(str)];
                    }
                }
                first_seq = TRUE;
            } else if (g_sum > letter_g) {
                break;
            }
        }
    }
    printf("KOKOKOKO %s\n", str);
}