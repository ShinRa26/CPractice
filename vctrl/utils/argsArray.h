#ifndef ARGS_ARRAY_H
#define ARGS_ARRAY_H

struct Arguments {
    const char **argv;
    int argc;
};

struct Arguments* initArguments();
void addAllArgs(struct Arguments*, const char**, int);
void addArg(struct Arguments*, const char*);
void removeLeadingArg(struct Arguments*);
void printInfo(struct Arguments*);


#endif