# include <stdio.h>
# include <string.h>
# include <stdlib.h>


/* Add more terms, Implement Error Messages into the funcs.*/

int data() {
    char * answer1 = "Bellend Refers to Dickhead. \n";
    char * answer2 = "WagWan Refers to Whats Up. \n";
    char * answer3 = "Twat or You Silly Twat, refers to you being a dumbass. \n";
    char * answer4 = "Knobhead Refers to Dickhead. \n";
    char * input;
    scanf("%s", input); 
        if (strncmp(input, "Bellend", 7) == 0) {
        printf("%s", answer1);
        } else {
           printf("Not a value! \n");
           return 0;
    }
        if (strncmp(input, "WagWan", 6) == 0) {
        printf("%s", answer2);
         } else {
           printf("Not a value! \n");
           return 0;
    }
        if (strncmp(input, "Twat", 4) == 0 ) {
            printf("%s", answer3);
             } else {
            printf("Not a value! \n");
           return 0;
        }
    if (strncmp(input, "Knobhead", 8) == 0 ) {
        printf("%s", answer4);
         return 0;
         } else {
          printf("Not a value! \n");
           return 0;
    }
}


int translation () {
    char input[50];
    printf("Type translate! \n");
    scanf("%s", &input);
    if (strncmp(input, "translate", 50) == 0 ) {    
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

