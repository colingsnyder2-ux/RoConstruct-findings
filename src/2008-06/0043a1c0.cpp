// roc 2008-06 0043a1c0  unit: CPropertyGridItemBrickColor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a1c0
//
// 0043a1c0  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 0043a1c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043a1c0 {
    char pad0[268];
    int m_x;
    int f();
};
int S_func_0043a1c0::f()
{
    return m_x;
}
