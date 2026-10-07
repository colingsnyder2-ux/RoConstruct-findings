// roc 2010-06 0085fba0  unit: CXTPDockingPaneAutoHidePanel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085fba0
//
// 0085fba0  8b442404             mov eax, dword ptr [esp + 4]
// 0085fba4  894110               mov dword ptr [ecx + 0x10], eax
// 0085fba7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0085fba0 {
    char pad0[16];
    int m_x;
    void f(int a1);
};
void S_func_0085fba0::f(int a1)
{
    m_x = (int)a1;
}
