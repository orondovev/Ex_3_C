#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

#define TXT 1024
#define WORD 32

int main() {//temporary main for check
    char letter[WORD];
    char text[TXT];
    char file[TXT + WORD];
    char c;

    scanf("%c", &c);
    int i = 0;
    while (i < TXT + WORD - 1) {
        if (c == '~') {
            file[i] = c;
            i++;
            break;
        }
        file[i] = c;
        scanf("%c", &c);
        i++;
    }
    file[i] = '\0';

    int index = 0;
    while (file[index] != ' ' && file[index] != '\n' && file[index] != '\t') {
        letter[index] = file[index];
        index++;
    }
    letter[index] = '\0';

    index++;
    int text_i = 0;
    while ('~' != file[index]) {
        text[text_i++] = file[index++];
    }
    text[text_i] = '\0';
    Gematria(letter, text);

    printf("TEST in --strlen(file)-- ==> %ld\n", strlen(file));


    printf("FILE ==> %s\n", file);
    printf("String TEXT ==>  %s\n", text);
    printf("LETTER ==> %s\n", letter);


}
