// roc 2009-06 0043d8b0  unit: CSelectionPropGrid  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043d8b0
//
// 0043d8b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0043d8b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043d8b0 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_0043d8b0::f()
{
    return m_x;
}
