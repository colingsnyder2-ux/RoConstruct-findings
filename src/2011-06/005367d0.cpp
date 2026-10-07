// roc 2011-06 005367d0  unit: CSHA1  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005367d0
//
// 005367d0  c6815802000000       mov byte ptr [ecx + 0x258], 0
// 005367d7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005367d0 {
    char pad0[600];
    char m_x;
    void f();
};
void S_func_005367d0::f()
{
    m_x = (char)0;
}
