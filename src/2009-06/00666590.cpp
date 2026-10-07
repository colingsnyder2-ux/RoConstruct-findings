// roc 2009-06 00666590  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666590
//
// 00666590  8d81c8010000         lea eax, [ecx + 0x1c8]
// 00666596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666590 {
    char pad0[456];
    int m_x;
    int* f();
};
int* S_func_00666590::f()
{
    return &m_x;
}
