// roc 2007-03 004326f0  unit: seg_00430000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004326f0
//
// 004326f0  80b9ec00000000       cmp byte ptr [ecx + 0xec], 0
// 004326f7  7408                 je 0x432701
// 004326f9  6a00                 push 0
// 004326fb  e8b0fdffff           call 0x4324b0
// 00432700  c3                   ret 
// 00432701  e91af4ffff           jmp 0x431b20
// copied from an identical function in another client (function ?f@CDataModelPropGrid@ns_ROCX000019@@QAEXXZ)

namespace ns_ROCX000019 {
struct CDataModelPropGrid {
    char pad0[0xec];
    unsigned char m_flag;
    void other(int);
    void alt();
    void f();
};

void CDataModelPropGrid::f() {
    if (m_flag)
        other(0);
    else
        alt();
}
}
