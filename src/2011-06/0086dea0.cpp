// roc 2011-06 0086dea0  unit: CXTPDockingPane  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086dea0
//
// 0086dea0  8b442404             mov eax, dword ptr [esp + 4]
// 0086dea4  894114               mov dword ptr [ecx + 0x14], eax
// 0086dea7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0086dea0 {
    char pad0[20];
    int m_x;
    void f(int a1);
};
void S_func_0086dea0::f(int a1)
{
    m_x = (int)a1;
}
