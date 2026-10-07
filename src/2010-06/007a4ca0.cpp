// roc 2010-06 007a4ca0  unit: W4_D3DFORMAT::?$EnumDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a4ca0
//
// 007a4ca0  8d4150               lea eax, [ecx + 0x50]
// 007a4ca3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a4ca0 {
    char pad0[80];
    int m_x;
    int* f();
};
int* S_func_007a4ca0::f()
{
    return &m_x;
}
