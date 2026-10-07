// roc 2008-06 00565e30  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565e30
//
// 00565e30  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 00565e36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00565e30 {
    char pad0[304];
    int m_x;
    int f();
};
int S_func_00565e30::f()
{
    return m_x;
}
