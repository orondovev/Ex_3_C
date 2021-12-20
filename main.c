#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

#define TXT 1025
#define WORD 32

int main() {
    char word[WORD];
    char text[TXT];
    char file[TXT + WORD];

    scanf("%[^'~']s", file);
    file[strlen(file)] = '~';
    int index = 0;
    while (file[index] != ' ' && file[index] != '\n' && file[index] != '\t') {
        word[index] = file[index];
        index++;
    }
    word[index] = '\0';

    index++;
    int text_i = 0;
    while ('~' != file[index]) {
        text[text_i++] = file[index++];
    }
    text[text_i] = '\0';
    char str[1025];
    str[0] = '\0';
    Gematria(word, text, str);
    str[0] = '\0';
    Atbash(word, text, str);
    str[0] = '\0';
    Anagram(word, text, str);
    return 1;


}
