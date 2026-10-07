// roc 2008-06 00799450  unit: CXTPRibbonControlTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799450
//
// 00799450  8b8114020000         mov eax, dword ptr [ecx + 0x214]
// 00799456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00799450 {
    char pad0[532];
    int m_x;
    int f();
};
int S_func_00799450::f()
{
    return m_x;
}
