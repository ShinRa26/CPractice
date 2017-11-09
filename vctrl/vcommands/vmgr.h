#ifndef VMGR_H
#define VMGR_H

struct VMgr {
    struct VAdd *add;
    struct VCommit *commit;
    struct VRevert *revert;

    // Function pointers!
};

/* Init */
void initVCtrl();
struct VMgr* initVMgr();

/* Add commands */


/* Commit Commands */


/* Revert Commands */



#endif