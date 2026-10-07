// roc 2011-06 0067dc00  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dc00
//
// 0067dc00  8d81ac010000         lea eax, [ecx + 0x1ac]
// 0067dc06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067dc00 {
    char pad0[428];
    int m_x;
    int* f();
};
int* S_func_0067dc00::f()
{
    return &m_x;
}
