#include "utility.h"

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

void freeSlice(int numArgs, char *args[]) {
    int i = 0;
    for(i = 0; i < numArgs; i++) {
        free(args[i]);
    }
    free(args);
}