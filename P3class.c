#include <stdio.h>
#include <string.h>

int main() {
    char in_str[100];
    scanf("%s", in_str);

    char out_str[5][10] = {0}; // Initialize all elements to null characters
    
    int len = strlen(in_str);
    int j = 0;
    int k = 0; // Separate index for out_str

    for (int i = 0; i < len; i++) {
        if (in_str[i] == ',') {
            j++;
            k = 0; // Reset k for the next substring
            in_str[i] = '@';
        } else {
            out_str[j][k] = in_str[i];
            k++;
        }
    }

    printf("index 0: %s\n", out_str[0]);
    printf("index 1: %s\n", out_str[1]);
    printf("index 2: %s\n\n", out_str[2]);
    
    printf("%s", in_str);

    return 0;
}

