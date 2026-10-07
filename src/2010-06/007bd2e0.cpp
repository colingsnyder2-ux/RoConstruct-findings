// roc 2010-06 007bd2e0  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd2e0
//
// 007bd2e0  8d4130               lea eax, [ecx + 0x30]
// 007bd2e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007bd2e0 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_007bd2e0::f()
{
    return &m_x;
}
