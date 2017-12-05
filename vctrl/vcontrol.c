/* Standard Lib includes */
#include <stdio.h>
#include <stdlib.h>

/* Custom includes */
#include "utils/argsArray.h"
#include "utils/constants.h"
#include "vcontrol.h"
#include "vcommands/vmgr.h"

void execute(struct Arguments *arr) {
    const char *action = arr->argv[0];
    struct VMgr *mgr = initVMgr();

    if(strcmp(action, INIT) == 0) {
        printf("INIT command!\n");
        // Initialise VCtrl folder in current directory
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