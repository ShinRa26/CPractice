/* Standard Lib includes */
#include <stdio.h>
#include <stdlib.h>

/* Custom includes */
#include "utils/argsArray.h"
#include "utils/constants.h"
#include "vcontrol.h"
#include "vcommands/vmgr.h"

#define DEBUG 1


void execute(struct Arguments *arr) {
    const char *action = arr->argv[0];

    struct VMgr *mgr = initVMgr();

    /* Switch with a string equivalent? */
    if(strcmp(action, INIT) == 0) {
        printf("INIT command!\n");
        char *cwd = initVCtrl();
        printf("%s\n",cwd);
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