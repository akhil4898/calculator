//
// Created by akhil on 25/7/19.
//
//Program of command line argument find the length of string that enter by the user.
#include <stdio.h>
#include <string.h>                                                          //String.h is used for the strlen() function.

int main(int argc, char* argv[]){
    int sum = 0;                                                              //Integer sum for count total no. of strings that user are enter on cmd.
    printf("argc = %d\n\n", argc);                                            //count the word that are entered by the user on cmd.
    if(argc > 1) {
        for (int i = 1; i < argc; i++) {
            printf("argv[%d] index has contain String =  %s\n", i, argv[i]);
            printf("Length of this String = %ld\n\n", strlen(argv[i]));
            sum += strlen(argv[i]);                                            //count the length of the strings and sum it.
        }
        printf("total String length = %d\n", sum);
    }
    printf("only one string is there.\n");
    return 0;
}