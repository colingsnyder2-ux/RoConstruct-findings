// from server: 100% by colin
// roc 2007-08 005964f0  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005964f0
//
// 005964f0  33c0                 xor eax, eax
// 005964f2  894108               mov dword ptr [ecx + 8], eax
// 005964f5  89410c               mov dword ptr [ecx + 0xc], eax
// 005964f8  c3                   ret 

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
