#ifndef VMGR_H
#define VMGR_H

struct VMgr {
    struct VAdd *add;
    struct VCommit *commit;
    struct VRevert *revert;

    // Function pointers!
};

/* Init */
struct VMgr* initVMgr();
void initVCtrl();

/* Add commands */


/* Commit Commands */


/* Revert Commands */



#endif