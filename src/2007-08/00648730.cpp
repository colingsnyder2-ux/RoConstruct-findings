// roc 2007-08 00648730  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648730
//
// 00648730  8d4130               lea eax, [ecx + 0x30]
// 00648733  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00648730 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_00648730::f()
{
    return &m_x;
}
