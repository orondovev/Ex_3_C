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

int isEqualString(char s1[], char s2[], unsigned long n) {
    int len = (int) n;
//    if(s2[0] == ' ') {
//        return 0;
//    }
    for (int i = 1, j = 1; j < len; ++i, ++j) {
        while (s1[i] != s2[j] && s2[i] == ' ') {
            j++;
            len++;
        }
        if (s1[i] != s2[j]) {
            return 0;
        }

    }
    return len;
}

void reversed(char word1[], char word2[]) {
    unsigned long word_len = strlen(word1);
    for (int i = 0; i < word_len; ++i) {
        word2[i] = word1[word_len - 1 - i];
    }
}

void castAtbash(char word[]) {
    unsigned long len = strlen(word);
    for (int i = 0; i < len; ++i) {
        if(word[i] >= 'a' && word[i] <= 'z') {
            int temp = word[i] - 97;
            word[i] = (char)(122 - temp);
        } else if(word[i] >= 'A' && word[i] <= 'Z') {
            int temp = word[i] - 65;
            word[i] = (char)(90 - temp);
        }
    }
}

void Atbash(char word[], char text[]) {
    int len_letter = strlen(word), len_text = strlen(text);
    char temp_word[len_letter + 1], temp_text[len_text + 1];
    bool first_seq = true;
    strcpy(temp_word, word);
    temp_text[len_text] = temp_word[len_letter] = '\0';
    castAtbash(temp_word);
    strcpy(temp_text, text);
    char revers[len_letter+1];
    reversed(temp_word, revers);
    revers[len_letter] = '\0';

    printf("REVERSE: %s\n", revers);

    char str[1025] = "Atbash Sequences : ";
    unsigned long str_index = strlen(str);
    if (len_text >= len_letter) {
        for (int i = 0; i <= len_text - len_letter; i++) {
            if (isEqualString(temp_word, temp_text + i, len_letter)) {
                if(!first_seq) {
                    str[str_index++] = '~';
                }
                for (int j = i; j < i + isEqualString(temp_word, temp_text + i, len_letter); ++j) {
                    str[str_index++] = temp_text[j];
                }
                first_seq = false;
            } else if (isEqualString(revers, temp_text + i, len_letter)) {
                if(!first_seq) {
                    str[str_index++] = '~';
                }
                for (int j = i; j < i + isEqualString(revers, temp_text + i, len_letter); ++j) {
                    str[str_index++] = temp_text[j];
                }
                first_seq = false;
            }
        }
    }
    printf("%s\n", str);
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
        char str[1025] = "Anagram Sequences: ";
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
//                printf("HEROS %c", str[an_index]);
//                printf("HERE %c ", text[k]);
                }
                first_seq = FALSE;
                i++;
                *container = container[i];
                num_of_chars -= 1;
            }
        }
        printf("%s\n", str);
    }