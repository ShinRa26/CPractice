#ifndef ARGS_ARRAY_H
#define ARGS_ARRAY_H

struct argsArray {
    const char **argv;
    int argc;
};

void initArgsArray(struct argsArray*);
void addAllArgs(struct argsArray*, const char**);
void addSingleArg(struct argsArray*, const char*);


#endif