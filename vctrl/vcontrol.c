/* Standard Lib includes */
#include <stdio.h>
#include <stdlib.h>

/* Custom includes */
#include "utils/constants.h"
#include "utils/utility.h"
#include "vcontrol.h"

#define DEBUG 1


void execute(int numArgs, char **args) {
    char *action = args[1];
    char **subargs = sliceArray(numArgs-1, args);
    
    /* Switch with a string equivalent? */
    if(strcmp(action, INIT) == 0) {
        printf("INIT command!\n");
        // Parse Init commands
    }
    else if(strcmp(action, ADD) == 0) {
        printf("ADD command!\n");
        // Parse Add
    }
    else if(strcmp(action, COMMIT) == 0) {
        printf("COMMIT command!\n");
        // Parse Commit
    }
    else if(strcmp(action, REVERT) == 0) {
        printf("REVERT command!\n");
        // Parse Revert
    }
    else {
        printf("%s is not a valid flag!\n", action);
        exit(EXIT_FAILURE);
    }

    cleanupSlices(numArgs-1, args);
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
        printf("You must pass an action!\n");
        exit(EXIT_FAILURE);
    }
    execute(argc, argv);
}