#include <stdio.h>

int main()
{
    /*
        Multiline-Comment
        Suppose we want to write following to the console:
        Hello there!
        Welcome to "The Complete C Course"
    */

    printf("Line 01: Three accoustic signals with (\\a)!\a\a\a");
    // \a stands for accoustic signal

    printf(" Line 02: I use a nextline ES. \n");
    // \n stands for next line

    printf("Line 03: \tHello\tthere. This is a tab-example.\n");
    // \t stands for horizontal tab.

    printf("Line 04: Welcome to \'The Complete C Course.\' with two newlines and Quotes.\n\n");
    // \" gives "

    printf("Line 05: The line, that never comes. We use a carriage returns.\r");
    // \r stands for carriage return

    printf("Line 06: This is a default line.\n");
    // \r stands for carriage return

  return 0;
}
