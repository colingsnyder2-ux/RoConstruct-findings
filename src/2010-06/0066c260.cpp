// roc 2010-06 0066c260  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c260
//
// 0066c260  8d81ac010000         lea eax, [ecx + 0x1ac]
// 0066c266  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c260 {
    char pad0[428];
    int m_x;
    int* f();
};
int* S_func_0066c260::f()
{
    return &m_x;
}
