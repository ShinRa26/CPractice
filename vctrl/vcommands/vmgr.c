#include "vmgr.h"
#include "vadd.h"
#include "vcommit.h"
#include "vrevert.h"

#include <stdio.h>
#include <unistd.h>

/* Init Commands */
struct VMgr* initVMgr() {
    struct Vmgr *mgr = (struct VMgr*)malloc(sizeof(struct VMgr));
    // mgr->add = initVAdd();
    //mgr->commit = initVCommit();
    //mgr->revert = initVRevert();

    return mgr;
}

void initVCtrl() {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    // TODO: Implement mkdir();
}