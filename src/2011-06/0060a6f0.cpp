// roc 2011-06 0060a6f0  unit: CXTPDockingPaneAutoHidePanel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060a6f0
//
// 0060a6f0  8b442404             mov eax, dword ptr [esp + 4]
// 0060a6f4  894110               mov dword ptr [ecx + 0x10], eax
// 0060a6f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0060a6f0 {
    char pad0[16];
    int m_x;
    void f(int a1);
};
void S_func_0060a6f0::f(int a1)
{
    m_x = (int)a1;
}
