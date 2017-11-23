/* Standard Lib includes */
#include <stdio.h>
#include <stdlib.h>

/* Custom includes */
#include "utils/argsArray.h"
#include "utils/constants.h"
#include "vcontrol.h"

#define DEBUG 1


void execute(struct Arguments *arr) {
    const char *action = arr->argv[0];


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

}


/** TESTING PURPOSES ONLY **/
int main(int argc, const char *argv[]) {
    if(argc == 1) {
        printf("You must pass an action!\n");
        exit(EXIT_FAILURE);
    }

    struct Arguments *arguments = (struct Arguments*)malloc(sizeof(struct Arguments));
    arguments = initArguments(arguments);
    addAllArgs(arguments, argv, argc);
    removeLeadingArg(arguments);
    execute(arguments);
    free(arguments);

    return 0;
}