// roc 2009-06 00814c00  unit: CXTPRibbonControlTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814c00
//
// 00814c00  8b8114020000         mov eax, dword ptr [ecx + 0x214]
// 00814c06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00814c00 {
    char pad0[532];
    int m_x;
    int f();
};
int S_func_00814c00::f()
{
    return m_x;
}
