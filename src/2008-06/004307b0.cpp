// roc 2008-06 004307b0  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004307b0
//
// 004307b0  8b813c020000         mov eax, dword ptr [ecx + 0x23c]
// 004307b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004307b0 {
    char pad0[572];
    int m_x;
    int f();
};
int S_func_004307b0::f()
{
    return m_x;
}
