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
    char answer1[30] = "Bellend Refers to Dickhead. \n";
    char answer2[30] = "WagWan Refers to Whats Up. \n";
    char answer3[70] = "Twat or You Silly Twat, refers to you being a dumbass. \n";
    char answer4[60] = "Knobhead Refers to Dickhead. \n";
    char input[50];
    scanf("%s", input); 
        if (strcmp(input, "Bellend") == 0) {
        printf("%s", answer1);
    }
        if (strcmp(input, "WagWan") == 0) {
        printf("%s", answer2);
    }
        if (strcmp(input, "Twat") == 0 ) {
            printf("%s", answer3);
        }
    if (strcmp(input, "Knobhead") == 0 ) {
        printf("%s", answer4);
       return 0;
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

int main () {
    translation();
}

