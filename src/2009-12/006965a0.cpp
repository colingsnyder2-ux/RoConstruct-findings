// roc 2009-12 006965a0  unit: RBX::RootInstance  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006965a0
//
// 006965a0  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 006965a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00601c80@ns_ROCX000067@@QAEHXZ)

namespace ns_ROCX000067 {
struct S_func_00601c80 {
    char pad0[92];
    int m_x;
    int f();
};
int S_func_00601c80::f()
{
    return m_x;
}
}
