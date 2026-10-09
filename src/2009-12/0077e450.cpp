// roc 2009-12 0077e450  unit: RBX::BlockBlockContact  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077e450
//
// 0077e450  8d412c               lea eax, [ecx + 0x2c]
// 0077e453  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007148f0@ns_ROCX000032@@QAEPAHXZ)

namespace ns_ROCX000032 {
struct S_func_007148f0 {
    char pad0[44];
    int m_x;
    int* f();
};
int* S_func_007148f0::f()
{
    return &m_x;
}
}
