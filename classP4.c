
#include <stdio.h>
#include <string.h>

// code work 
int main(){

    char in_str[100]; 
    char out_str[10][10] = {0}; //initializing all element to null char

    printf("Enter the string bro:  \n");
    scanf("%s", in_str);

    int len = strlen(in_str);

    int j=0;
    int k=0;
   

    for(int i = 0; i < len; i++) {
        if(in_str[i] == ',') {
            j++;
            k=0; //reset k for the next substring
        } else {
            out_str[j][k] = in_str[i];
            k++;
        }
    } 

    
    for(int n = 0; n <= j; n++) {
        int LEN = strlen(out_str[n]);
        printf("index %d: %d len \n", n, LEN);
    }

    return 0;
}
