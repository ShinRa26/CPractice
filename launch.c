#include <stdio.h>
#include "vctrl/vcontrol.h"

int main(int argc, char *argv[]) {
    if(argc == 0 || argc == 1) {
        fprintf(stderr, "Insufficient arguments!\n");
        exit(-1);
    }

    int numArgs = argc-1;
    char **args;
    args = sliceArray(numArgs, argv);
    execute(numArgs, args);
}