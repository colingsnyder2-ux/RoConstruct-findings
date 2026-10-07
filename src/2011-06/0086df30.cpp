// roc 2011-06 0086df30  unit: CXTPDockingPane  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086df30
//
// 0086df30  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0086df36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0086df30 {
    char pad0[228];
    int m_x;
    int f();
};
int S_func_0086df30::f()
{
    return m_x;
}
