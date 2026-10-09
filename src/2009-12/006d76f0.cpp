// roc 2009-12 006d76f0  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d76f0
//
// 006d76f0  33c0                 xor eax, eax
// 006d76f2  894108               mov dword ptr [ecx + 8], eax
// 006d76f5  89410c               mov dword ptr [ecx + 0xc], eax
// 006d76f8  c3                   ret 
// copied from an identical function in another client (function ?clearState@LaserTool@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
struct LaserTool {
    int reserved0;
    int reserved1;
    int field8;
    int fieldC;
    void clearState();
};

void LaserTool::clearState() {
    field8 = 0;
    fieldC = 0;
}
}
