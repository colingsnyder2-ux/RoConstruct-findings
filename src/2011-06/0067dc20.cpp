// roc 2011-06 0067dc20  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dc20
//
// 0067dc20  8d81c4010000         lea eax, [ecx + 0x1c4]
// 0067dc26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067dc20 {
    char pad0[452];
    int m_x;
    int* f();
};
int* S_func_0067dc20::f()
{
    return &m_x;
}
