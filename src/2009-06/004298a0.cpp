// roc 2009-06 004298a0  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004298a0
//
// 004298a0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 004298a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004298a0 {
    char pad0[616];
    int m_x;
    int f();
};
int S_func_004298a0::f()
{
    return m_x;
}
