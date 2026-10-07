// roc 2011-06 008072c0  unit: W4_D3DFORMAT::?$EnumDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008072c0
//
// 008072c0  8d4150               lea eax, [ecx + 0x50]
// 008072c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008072c0 {
    char pad0[80];
    int m_x;
    int* f();
};
int* S_func_008072c0::f()
{
    return &m_x;
}
