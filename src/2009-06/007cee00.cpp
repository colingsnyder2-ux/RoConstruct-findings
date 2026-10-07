// roc 2009-06 007cee00  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cee00
//
// 007cee00  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007cee06  8b4014               mov eax, dword ptr [eax + 0x14]
// 007cee09  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007cee00 {
    char pad[20];
    int m_x;
};
struct S_func_007cee00 {
    char pad[144];
    I_func_007cee00* m_p;
    int f();
};
int S_func_007cee00::f()
{
    return m_p->m_x;
}
