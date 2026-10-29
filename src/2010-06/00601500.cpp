// roc 2010-06 00601500  unit: RBX::ArrowTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601500
//
// 00601500  803900               cmp byte ptr [ecx], 0
// 00601503  7515                 jne 0x60151a
// 00601505  80790100             cmp byte ptr [ecx + 1], 0
// 00601509  750f                 jne 0x60151a
// 0060150b  80790200             cmp byte ptr [ecx + 2], 0
// 0060150f  7509                 jne 0x60151a
// 00601511  80790300             cmp byte ptr [ecx + 3], 0
// 00601515  7503                 jne 0x60151a
// 00601517  33c0                 xor eax, eax
// 00601519  c3                   ret 
// 0060151a  b801000000           mov eax, 1
// 0060151f  c3                   ret 
// copied from an identical function in another client (function ?isIdle@ArrowToolBase@ns_ROCX00001f@@QBEHXZ)

namespace ns_ROCX00001f {
struct ArrowToolBase {
    char f0;
    char f1;
    char f2;
    char f3;
    int isIdle() const;
};

int ArrowToolBase::isIdle() const {
    if (f0 || f1 || f2 || f3)
        return 1;
    return 0;
}
}
