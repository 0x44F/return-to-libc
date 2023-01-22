#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 256

void vulnerable_function(char* input) {
    char buffer[BUF_SIZE];
    strcpy(buffer, input);
    printf("%s\n", buffer);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    vulnerable_function(argv[1]);
    return 0;
}

// Important to remember this is only an example and most programs will be more sophisticated.
