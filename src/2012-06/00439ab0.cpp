// roc 2012-06 00439ab0  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00439ab0
//
// 00439ab0  8b8100020000         mov eax, dword ptr [ecx + 0x200]
// 00439ab6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00439ab0 {
    char pad0[512];
    int m_x;
    int f();
};
int S_func_00439ab0::f()
{
    return m_x;
}
