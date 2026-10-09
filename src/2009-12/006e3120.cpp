// roc 2009-12 006e3120  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3120
//
// 006e3120  8d81bc010000         lea eax, [ecx + 0x1bc]
// 006e3126  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007947b0@ns_ROCX00007d@@QAEPAHXZ)

namespace ns_ROCX00007d {
struct S_func_007947b0 {
    char pad0[444];
    int m_x;
    int* f();
};
int* S_func_007947b0::f()
{
    return &m_x;
}
}
