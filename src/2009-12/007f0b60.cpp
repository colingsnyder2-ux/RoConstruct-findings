// roc 2009-12 007f0b60  unit: W4_D3DFORMAT::?$EnumDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f0b60
//
// 007f0b60  8d4150               lea eax, [ecx + 0x50]
// 007f0b63  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00715420@ns_ROCX000014@@QAEPAHXZ)

namespace ns_ROCX000014 {
struct S_func_00715420 {
    char pad0[80];
    int m_x;
    int* f();
};
int* S_func_00715420::f()
{
    return &m_x;
}
}
