// roc 2009-12 0062bca0  unit: seg_00620000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062bca0
//
// 0062bca0  c681ac00000001       mov byte ptr [ecx + 0xac], 1
// 0062bca7  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0058d800@ns_ROCX00003b@@QAEXXZ)

namespace ns_ROCX00003b {
struct S_func_0058d800 {
    char pad0[172];
    char m_x;
    void f();
};
void S_func_0058d800::f()
{
    m_x = (char)1;
}
}
