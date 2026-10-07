// roc 2010-06 008a4930  unit: CXTPRibbonControlTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4930
//
// 008a4930  8b8114020000         mov eax, dword ptr [ecx + 0x214]
// 008a4936  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a4930 {
    char pad0[532];
    int m_x;
    int f();
};
int S_func_008a4930::f()
{
    return m_x;
}
