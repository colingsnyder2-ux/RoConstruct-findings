// roc 2007-08 00430eb0  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430eb0
//
// 00430eb0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 00430eb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00430eb0 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_00430eb0::f()
{
    return m_x;
}
