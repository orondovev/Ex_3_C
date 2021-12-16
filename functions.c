#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

#define TXT 1024
#define WORD 30

int main() {//temporary main for check
    printf("\n");
    char letter[WORD];
    char textss[TXT];
    char file[TXT + WORD];
    char c;
    scanf("%c", &c);
    int i = 0;
    while (i < TXT + WORD-1) {
        if(c == '~') {

            break;
        }
        file[i] = c;
        scanf("%c", &c);
        i++;

    }

//    printf("%s", file);

    int index = 0;

    while(file[index] != ' ' && file[index] != '\n' && file[index] != '\t') {
        letter[index] = file[index];
        index++;
    }

    index++;
    int text_i = 0;
    while (index < strlen(file)) {
        textss[text_i++] = file[index++];
    }

    printf("FILE %s\n", file);
    printf("TEXT %s\n", textss);
    printf("LETTER %s\n", letter);



//    int i = 0;
//    while (i < 30) {
//        if(c == '\t' || c == '\n' || c == ' ') {
//            break;
//        }
//        letter[i] = c;
//        scanf("%c", &c);
//        i++;
//    }
//    textss[0] = c;
//    scanf("%c", &c);
//    textss[1] = c;
//    printf("%c%c", textss[0], textss[1]);

//    scanf("%c", &textss[0]);

//    scanf("%s", textss);
//    printf("%s", textss);

//    letter[0] = c;

//    scanf("%s", letter);
//    for (int j = 0; j < strlen(letter) ; ++j) {
//        printf("%c", letter[j]);
//    }

//    printf("\nTEST %c", textss[0]);


}









//    char c;
//    int i = 0;
////    scanf("%s", &c);// for the first word
//    do {
//        scanf("%s", &c);
//        letter[i] = c;
//        i++;
//    }while(letter[i] != (char)9 || letter[i] != (char)10 || letter[i] != (char)32);
//    printf("%c", letter[i]);
//    scanf("%s", text);

