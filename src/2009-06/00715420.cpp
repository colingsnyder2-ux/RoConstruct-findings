// roc 2009-06 00715420  unit: W4_D3DFORMAT::?$EnumDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00715420
//
// 00715420  8d4150               lea eax, [ecx + 0x50]
// 00715423  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00715420 {
    char pad0[80];
    int m_x;
    int* f();
};
int* S_func_00715420::f()
{
    return &m_x;
}
