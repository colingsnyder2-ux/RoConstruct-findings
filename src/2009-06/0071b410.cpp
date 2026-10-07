// roc 2009-06 0071b410  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b410
//
// 0071b410  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0071b416  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071b410 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_0071b410::f()
{
    return m_x;
}
