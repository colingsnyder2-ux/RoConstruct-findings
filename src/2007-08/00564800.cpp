// roc 2007-08 00564800  unit: CXTPDockingPaneAutoHidePanel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564800
//
// 00564800  8b442404             mov eax, dword ptr [esp + 4]
// 00564804  894110               mov dword ptr [ecx + 0x10], eax
// 00564807  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00564800 {
    char pad0[16];
    int m_x;
    void f(int a1);
};
void S_func_00564800::f(int a1)
{
    m_x = (int)a1;
}
