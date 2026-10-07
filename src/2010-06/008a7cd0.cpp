// roc 2010-06 008a7cd0  unit: CXTMemDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7cd0
//
// 008a7cd0  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 008a7cd7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a7cd0 {
    char pad0[20];
    int m_x;
    void f();
};
void S_func_008a7cd0::f()
{
    m_x = (int)0;
}
