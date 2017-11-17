#include "utility.h"

void cleanupSlices(int numArgs, char *args[]) {
    int i = 0;
    printf("Here i am!\n");
    for(i = 0; i < numArgs; i++) {
        printf("Arg[%d]: %s\n", i, args[i]);
        free((char*)args[i]);
        printf("Freed Position!\n");
    }
    free(args);
    printf("All malloc freed\n");
}


char** sliceArray(int numArgs, char *args[]) {
    int i = 0;
    char **slice = (char**)malloc(numArgs*sizeof(char*));
    for(i = 0; i < numArgs; i++) {
        slice[i] = (char*)malloc(BUF_LIMIT*sizeof(char));
        sprintf(slice[i], args[i+1]);
    }

    return slice;
}

void printAll(int numArgs, char *args[]) {
    int i = 0;
    for(i = 0; i < numArgs; i++) {
        printf("%s\n", args[i]);
    }
}
