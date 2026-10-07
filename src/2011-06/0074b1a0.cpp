// roc 2011-06 0074b1a0  unit: RBX::Joint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b1a0
//
// 0074b1a0  8d411c               lea eax, [ecx + 0x1c]
// 0074b1a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074b1a0 {
    char pad0[28];
    int m_x;
    int* f();
};
int* S_func_0074b1a0::f()
{
    return &m_x;
}
