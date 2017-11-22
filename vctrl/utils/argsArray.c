#include "argsArray.h"
#include "constants.h"
#include <stddef.h>

struct Arguments* initArguments() {
    struct Arguments *arr = (struct Arguments*)malloc(sizeof(struct Arguments));
    arr->argv = NULL;
    arr->argc = 0;
    return arr;
}

void addAllArgs(struct Arguments *arr, const char **args, int numArgs) {
    arr->argv = args;
    arr->argc = numArgs;
}

void addArg(struct Arguments *arr, const char *arg) {
    int i;
    const char *cpy[arr->argc+1];
    const char **orig = arr->argv;
    for(i = 0; i < arr->argc; ++i) {
        cpy[i] = orig[i];
    }
    cpy[arr->argc] = arg;
    arr->argv = cpy;
    arr->argc++;
}

void removeLeadingArg(struct Arguments *arr) {
    int i;
    const char *cpy[arr->argc-1];
    // TODO: Start here!
    arr->argc--;
}

void printInfo(struct Arguments *arr) {
    int i;
    printf("Total Args: %d\n", arr->argc);
    for(i = 0; i < arr->argc; ++i) {
        printf("Argument[%d]: %s\n", i, arr->argv[i]);
    }
    printf("\n");
}