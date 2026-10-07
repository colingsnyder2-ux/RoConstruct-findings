// roc 2011-06 008fd4f0  unit: CXTPRibbonControlTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd4f0
//
// 008fd4f0  8b8114020000         mov eax, dword ptr [ecx + 0x214]
// 008fd4f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008fd4f0 {
    char pad0[532];
    int m_x;
    int f();
};
int S_func_008fd4f0::f()
{
    return m_x;
}
