// roc 2009-12 006e30f0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e30f0
//
// 006e30f0  8d81a4010000         lea eax, [ecx + 0x1a4]
// 006e30f6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00794770@ns_ROCX000079@@QAEPAHXZ)

namespace ns_ROCX000079 {
struct S_func_00794770 {
    char pad0[420];
    int m_x;
    int* f();
};
int* S_func_00794770::f()
{
    return &m_x;
}
}
