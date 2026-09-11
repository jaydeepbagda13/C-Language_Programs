#include <stdio.h>
#include <string.h>

int main() {
    char word[20] = "computer";   // string initialization

    printf("Word: %s\n", word);
    printf("Length of word: %lu\n", strlen(word)); // strlen returns length

    return 0;
}
