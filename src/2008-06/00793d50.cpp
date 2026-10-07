// roc 2008-06 00793d50  unit: CXTPRibbonTab  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793d50
//
// 00793d50  8b4108               mov eax, dword ptr [ecx + 8]
// 00793d53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00793d50 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_00793d50::f()
{
    return m_x;
}
