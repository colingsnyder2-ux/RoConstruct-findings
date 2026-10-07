// roc 2011-06 0074b1b0  unit: RBX::Joint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b1b0
//
// 0074b1b0  8d4124               lea eax, [ecx + 0x24]
// 0074b1b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074b1b0 {
    char pad0[36];
    int m_x;
    int* f();
};
int* S_func_0074b1b0::f()
{
    return &m_x;
}
