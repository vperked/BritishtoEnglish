# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int err (char *answer) {
    if (strcmp(answer, "") == 0) {
        printf("Invalid!");
        return 0;
    } else {
    }
   
}


int data() {
    char answer[50];
    scanf("%s", answer); 
        if (strcmp(answer, "Bellend") == 0) {
        printf("Bellend refers to dickhead.") ;
    }
    values();
    return 0;
}


/* Add answers to an array!*/

int values () {
   char *answer [] = {"Bellend"};
    for (int i = 0; i < 1; i++)
    {
        printf("%s", answer[i]);
    }
    return 0;
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

int main () {
    translation();
}

