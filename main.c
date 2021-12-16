#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

#define TRUE 1
#define FALSE 0

#define TXT 1024
#define WORD 30

int main() {//temporary main for check
    printf("\n");
    char letter[WORD];
    char text[TXT];
    char file[TXT + WORD];
    char c;
    scanf("%c", &c);
    int i = 0;
    while (i < TXT + WORD - 1) {
        if (c == '~') {

            break;
        }
        file[i] = c;
        scanf("%c", &c);
        i++;

    }

    int index = 0;

    while (file[index] != ' ' && file[index] != '\n' && file[index] != '\t') {
        letter[index] = file[index];
        index++;
    }

    index++;
    int text_i = 0;
    while (index < strlen(file)) {
        text[text_i++] = file[index++];
    }
    Gematria(letter, strdup(text));
    printf("FILE %s\n", file);
    printf("TEXT %s\n", text);
    printf("LETTER %s\n", letter);


}
