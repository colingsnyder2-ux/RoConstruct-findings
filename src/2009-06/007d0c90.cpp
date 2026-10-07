// roc 2009-06 007d0c90  unit: CXTPDockingPaneAutoHidePanel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0c90
//
// 007d0c90  8b442404             mov eax, dword ptr [esp + 4]
// 007d0c94  894110               mov dword ptr [ecx + 0x10], eax
// 007d0c97  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007d0c90 {
    char pad0[16];
    int m_x;
    void f(int a1);
};
void S_func_007d0c90::f(int a1)
{
    m_x = (int)a1;
}
