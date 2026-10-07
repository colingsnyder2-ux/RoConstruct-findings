// roc 2009-06 00666560  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666560
//
// 00666560  8d81b0010000         lea eax, [ecx + 0x1b0]
// 00666566  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666560 {
    char pad0[432];
    int m_x;
    int* f();
};
int* S_func_00666560::f()
{
    return &m_x;
}
