#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "fundamentals.h"


#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

void fundamentals(void)
{
    // V2
    printf("*** Start of Measuring Strings Demo ***\n"); 
    char buffer2[BUFFER_SIZE];
    do {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);
        buffer2[strlen(buffer2)-1] = '\0';
        if (strcmp(buffer2, "q") != 0)
        {
            printf("The length of \'%s\' is %d characters\n", 
                buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q") != 0);
    printf("*** End of Measuring Strings Demo ***\n\n");

}