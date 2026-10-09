// roc 2009-12 007b2fb0  unit: RBX::Assembly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b2fb0
//
// 007b2fb0  c741240f000000       mov dword ptr [ecx + 0x24], 0xf
// 007b2fb7  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006d5cd0@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
struct S_func_006d5cd0 {
    char pad0[36];
    int m_x;
    void f();
};
void S_func_006d5cd0::f()
{
    m_x = (int)0xf;
}
}
