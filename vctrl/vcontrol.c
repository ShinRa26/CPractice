/* Standard Lib includes */
#include <stdio.h>
#include <stdlib.h>

/* Custom includes */
#include "utils/constants.h"
#include "utils/utility.h"
#include "vcontrol.h"


void execute(int numArgs, char *args[]) {
    char *action = args[0];
    char **subargs = sliceArray(numArgs, args);
    freeSlice(numArgs, args); // Frees the initial slice of arguments
    
    /* Switch with a string equivalent? */
    if(strcmp(action, INIT) == 0) {
        // Parse Init
    }
    else if(strcmp(action, ADD) == 0) {
        // Parse Add
    }
    else if(strcmp(action, COMMIT) == 0) {
        // Parse Commit
    }
    else if(strcmp(action, REVERT) == 0) {
        // Parse Revert
    }
    else {
        printf("%s is not a valid flag!\n", action);
        exit(EXIT_FAILURE);
    }
}
