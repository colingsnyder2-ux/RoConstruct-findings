// roc 2008-06 007a13f0  unit: CXTMemDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a13f0
//
// 007a13f0  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 007a13f7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a13f0 {
    char pad0[20];
    int m_x;
    void f();
};
void S_func_007a13f0::f()
{
    m_x = (int)0;
}
