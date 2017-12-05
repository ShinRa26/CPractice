#ifndef VMGR_H
#define VMGR_H

struct VMgr {
    void (*init)(void);
    struct VAdd *add;
    struct VCommit *commit;
    struct VRevert *revert;

};

/* Init */
struct VMgr* initVMgr();
void initVCtrl();

/* Add commands */


/* Commit Commands */


/* Revert Commands */



#endif