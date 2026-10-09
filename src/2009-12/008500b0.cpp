// roc 2009-12 008500b0  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008500b0
//
// 008500b0  c7413401000000       mov dword ptr [ecx + 0x34], 1
// 008500b7  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00775350@ns_ROCX0000ad@@QAEXXZ)

namespace ns_ROCX0000ad {
struct S_func_00775350 {
    char pad0[52];
    int m_x;
    void f();
};
void S_func_00775350::f()
{
    m_x = (int)1;
}
}
