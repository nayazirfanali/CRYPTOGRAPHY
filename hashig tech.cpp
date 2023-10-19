#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

unsigned long hash(char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; 

    return hash % MAX_SIZE; 
}

int main() {
    char input[MAX_SIZE];
    printf("Enter a string: ");
    fgets(input, MAX_SIZE, stdin);
	    if ((strlen(input) > 0) && (input[strlen(input) - 1] == '\n'))
        input[strlen(input) - 1] = '\0';

    printf("Hash value for the string is: %lu\n", hash(input));
    return 0;
}

