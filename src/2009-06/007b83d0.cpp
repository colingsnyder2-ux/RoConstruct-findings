// roc 2009-06 007b83d0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b83d0
//
// 007b83d0  8b8148020000         mov eax, dword ptr [ecx + 0x248]
// 007b83d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b83d0 {
    char pad0[584];
    int m_x;
    int f();
};
int S_func_007b83d0::f()
{
    return m_x;
}
