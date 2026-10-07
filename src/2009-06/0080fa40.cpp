// roc 2009-06 0080fa40  unit: CXTPRibbonTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fa40
//
// 0080fa40  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0080fa46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0080fa40 {
    char pad0[136];
    int m_x;
    int f();
};
int S_func_0080fa40::f()
{
    return m_x;
}
