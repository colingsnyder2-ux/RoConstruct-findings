// roc 2010-06 0066c290  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c290
//
// 0066c290  8d81c4010000         lea eax, [ecx + 0x1c4]
// 0066c296  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c290 {
    char pad0[452];
    int m_x;
    int* f();
};
int* S_func_0066c290::f()
{
    return &m_x;
}
