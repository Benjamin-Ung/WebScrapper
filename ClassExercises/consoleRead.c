#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        printf("Total arguments = %d\n", argc);
        printf("The argument supplied is %s and %s\n", argv[0], argv[1]);
    }
    else if(argc > 2){
        printf("Total arguments = %d\n", argc);
        //print out 3rd argument?
        printf("%s\n", argv[2]);
        printf("Too many arguments supplied.\n");
    }
    else {
        printf("Total arguments = %d\n", argc);
        
        printf("One argument expected.\n");
    }
}