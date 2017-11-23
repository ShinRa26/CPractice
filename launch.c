#include "vctrl/vcontrol.h"
#include "vctrl/utils/argsArray.h"

#include <stdlib.h>

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