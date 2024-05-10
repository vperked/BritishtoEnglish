# include <stdio.h>
# include <string.h>

int translaton () {
    char input[20];
    printf("Type something: \n");
    scanf("%s", &input);
    if  (strcmp(input, "hello!") == 0 ) {
        printf("Hello!");
    } else {
        printf("Wrong!");
       
    }
}

int main () {
    translaton();
}

