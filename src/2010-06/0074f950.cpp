// roc 2010-06 0074f950  unit: RBX::Humanoid  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074f950
//
// 0074f950  c741240f000000       mov dword ptr [ecx + 0x24], 0xf
// 0074f957  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074f950 {
    char pad0[36];
    int m_x;
    void f();
};
void S_func_0074f950::f()
{
    m_x = (int)0xf;
}
