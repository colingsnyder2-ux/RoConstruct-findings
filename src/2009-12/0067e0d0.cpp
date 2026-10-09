// roc 2009-12 0067e0d0  unit: RBX::VerbContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067e0d0
//
// 0067e0d0  8d81d8000000         lea eax, [ecx + 0xd8]
// 0067e0d6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005e6e20@ns_ROCX000051@@QAEPAHXZ)

namespace ns_ROCX000051 {
struct S_func_005e6e20 {
    char pad0[216];
    int m_x;
    int* f();
};
int* S_func_005e6e20::f()
{
    return &m_x;
}
}
