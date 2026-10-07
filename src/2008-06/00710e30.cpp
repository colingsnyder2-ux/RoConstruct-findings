// roc 2008-06 00710e30  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710e30
//
// 00710e30  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00710e36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00710e30 {
    char pad0[140];
    int m_x;
    int f();
};
int S_func_00710e30::f()
{
    return m_x;
}
