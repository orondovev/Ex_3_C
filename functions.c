#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <ctype.h>
#include <stdbool.h>

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
    int test = gValue('i') + gValue('n') + gValue('.');
    int test2 = gValue('f') + gValue('i') + gValue('s') + gValue('h');
    printf("TEST GEM: ==> %d\n", test);
    printf("TEST GEM: ==> %d\n", test2);

    char str[7000] = "Gematria Sequences: ";
    int first_seq = TRUE;
    int word_g = 0;
    for (int i = 0; i < strlen(word); ++i) {
        word_g += gValue(word[i]);
    }
    int g_sum = 0;
    int j = 0;
    unsigned long str_index = strlen(str), total_string_len = strlen(text);
    for (int i = 0; i < total_string_len;) {
        if (!isalpha(text[i])) {
            i++;
            continue;
        }
        if (g_sum + gValue(text[j]) < word_g || !isalpha(text[j])) {
            g_sum += gValue(text[j]);
            j++;
        } else if (g_sum + gValue(text[j]) == word_g) {
            g_sum += gValue(text[j]);
            if (!first_seq) {
                str[str_index++] = '~';
            }
            for (int k = i; k <= j; ++k) {
                str[str_index++] = text[k];
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

bool contain(char word[], char container[], char c) {
    unsigned long word_len = strlen(word);
    bool flag = false;
    for (int i = 0; i < word_len; ++i) {
        if (word[i] == c) {
            flag = true;
            break;
        }
    }
    if (flag) {
        unsigned long container_len = strlen(container);
        for (int i = 0; i < container_len; ++i) {
            if (container[i] == c) {
                return false;
            }
        }
    } else {
        return false;
    }
    return true;
}

void Anagram(char word[], char text[]) {
    char str[7000] = "Anagram Sequences: ";
    int first_seq = TRUE;
    int j = 0;
    unsigned long an_index = strlen(str);
    unsigned long total_string_len = strlen(text);
    char container[strlen(text)];
    int con_index = 0, forward = 1;
    unsigned long num_of_chars = 0, word_len = strlen(word);
    for (int i = 0; i < total_string_len;) {
        if (text[j] == ' ') {
            container[con_index] = ' ';
            con_index++;
            j++;
            continue;
        } else if (contain(word, container, text[j])) {
            container[con_index++] = text[j];
            num_of_chars++;
            j++;
        } else {
            j++;
            i = j;
            *container = container[i];
            num_of_chars = 0;
            while (text[i] == ' ') {
                i++;
                j++;
                *container = container[i];
            }
        }
        if (num_of_chars == word_len) {
            if (!first_seq) {
                str[an_index++] = '~';
            }
            for (int k = i; k < j; ++k) {
                str[an_index++] = text[k];
            }
            first_seq = FALSE;
            i++;
//            con_index++;
            *container = container[i];
            num_of_chars -= 1;
        }
    }
    printf("%s\n", str);
}