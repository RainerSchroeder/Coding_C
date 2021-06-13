//Lesson 01: Introduce yourself

#include <stdio.h>

int main(){

    char name[25];
    char language[25];

    printf("Hi! What's your name? ");
    scanf("%s", name);
    printf("\nNice to meet you, %s!\n", name);

    printf("\nYou are coding. What's your favorite language? ");
    scanf("%s", language);

    printf("\nGreat! I love %s, too.\n", language);

    return 0;
}

