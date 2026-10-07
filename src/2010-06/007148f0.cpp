// roc 2010-06 007148f0  unit: RBX::BlockBlockContact  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007148f0
//
// 007148f0  8d412c               lea eax, [ecx + 0x2c]
// 007148f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007148f0 {
    char pad0[44];
    int m_x;
    int* f();
};
int* S_func_007148f0::f()
{
    return &m_x;
}
