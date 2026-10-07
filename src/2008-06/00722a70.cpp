// roc 2008-06 00722a70  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722a70
//
// 00722a70  8b8148020000         mov eax, dword ptr [ecx + 0x248]
// 00722a76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00722a70 {
    char pad0[584];
    int m_x;
    int f();
};
int S_func_00722a70::f()
{
    return m_x;
}
