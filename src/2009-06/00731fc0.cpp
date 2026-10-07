// roc 2009-06 00731fc0  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731fc0
//
// 00731fc0  8d4130               lea eax, [ecx + 0x30]
// 00731fc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00731fc0 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_00731fc0::f()
{
    return &m_x;
}
