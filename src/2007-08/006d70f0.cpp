// roc 2007-08 006d70f0  unit: CXTMemDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d70f0
//
// 006d70f0  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 006d70f7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d70f0 {
    char pad0[20];
    int m_x;
    void f();
};
void S_func_006d70f0::f()
{
    m_x = (int)0;
}
