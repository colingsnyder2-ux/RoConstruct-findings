// roc 2011-06 008f7ee0  unit: CXTPRibbonTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7ee0
//
// 008f7ee0  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 008f7ee6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008f7ee0 {
    char pad0[136];
    int m_x;
    int f();
};
int S_func_008f7ee0::f()
{
    return m_x;
}
