# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int data() {
    char answer[50];
    scanf("%s", answer); 
        if (strcmp(answer, "Bellend") == 0) {
        printf("Bellend refers to dickhead.") ;
        return 0;
        } else {
        err();
    }
}


int translation () {
    char input[20];
    printf("Type translate! \n");
    scanf("%s", &input);
    if (strcmp(input, "translate") == 0 ) {    
        printf("Hello and welcome to British to English translator, Please input the word you'd like to translate: ");
        data();
        return 0;
    } else {
        printf("Wrong code!");
    }
}

/* Finish this part first!*/

int err () {
    printf("Ive run into a error!");
}

int main () {
    translation();
}

