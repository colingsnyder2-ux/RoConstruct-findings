// roc 2010-06 0089f370  unit: CXTPRibbonTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f370
//
// 0089f370  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0089f376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0089f370 {
    char pad0[136];
    int m_x;
    int f();
};
int S_func_0089f370::f()
{
    return m_x;
}
