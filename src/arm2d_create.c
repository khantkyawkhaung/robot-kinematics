#include "robotkinematics.h"


#if defined __cplusplus
extern "C" {
#endif


rkArmLink2D *rkCreateArm2D(int count) {
    rkArmLink2D *arm = (rkArmLink2D*) malloc((count+1) * sizeof(rkArmLink2D));
    for(int i=0; i<count+1; i++) {
        arm[i].q = 0;
        arm[i].transform = (rkMat3) {{
            {1, 0, 0},
            {0, 1, 0}
        }};
        arm[i].startOfChain = true;
        arm[i].endOfChain = true;
    }
    arm->startOfChain = true;
    return arm;
}


#if defined __cplusplus
}
#endif
