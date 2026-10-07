// roc 2011-06 009013a0  unit: CXTMemDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009013a0
//
// 009013a0  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 009013a7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_009013a0 {
    char pad0[20];
    int m_x;
    void f();
};
void S_func_009013a0::f()
{
    m_x = (int)0;
}
