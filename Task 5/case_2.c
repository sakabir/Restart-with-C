#include <stdio.h>
#include <stdbool.h> // to use the bool data type
#include <string.h> // to use the strlen() function

int main(){
    char inp[500];
    bool isValid; // this flag will be used to indicate if the input is valid

    isValid = true; // initialy assume the input is valid

    printf("Enter a text: ");
    scanf("%s", inp); // read the input string
    int length = strlen(inp); // determine the length of the input

    for (int i = 0; i < length; i++){
        if(inp[i] >= 'a' && inp[i] <= 'z'){
            // make it upper case
            inp[i] -= 32; // 'a -= 32' is same as 'a = a - 32'
        }else if(inp[i] >= 'A' && inp[i] <= 'Z'){
            // make it lower case
            inp[i] += 32; // 'a += 32' is same as 'a = a + 32'
        }else{
            // the input contains a non alphabetical charecter.
            // mark the input as invalid
            isValid = false;

            // we do not need to check any further. Break the loop
            break;
        }
    }

    // atfirst check if the input is valid or not
    if(isValid){
        // input is valid. print converted text
        printf("%s\n", inp);
    }else{
        // input is not valid
        printf("The input is not valid\n");
    }
    

    return 0;
}