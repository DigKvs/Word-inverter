#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void) {

    char word[20];

    printf("digite sua palavra --> ");
    fgets(word, sizeof(word), stdin);

    int count = 0;

    char *ptr = word;

    while (*ptr!='\0'){
        count++;
        ptr++;
    }
    count--;

    char *ptrM = word;


    printf("\nO numero de caracteres na palavra eh: %i\n", count);

    printf("sua palavra modificada eh : ");


    for (int i=0; i<count; i++){

        if (*ptrM < 123 && *ptrM > 96){
            printf("%c", *ptrM - 32);
            ptrM++;
        }
        else if (*ptrM < 91 && *ptrM > 64){
            printf("%c", *ptrM + 32);
            ptrM++;
        }
        else {
            printf("%c", *ptrM);
            ptrM++;
        }
    }

    char *ptrF = word;

    ptrF += count;

    printf("\nsua palavra invertida eh : ");


    for (int i=0; i<count + 1; i++){
        printf(" %c", *ptrF);
        ptrF--;
    }
}

