// roc 2011-06 0081f720  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f720
//
// 0081f720  8d4130               lea eax, [ecx + 0x30]
// 0081f723  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0081f720 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_0081f720::f()
{
    return &m_x;
}
