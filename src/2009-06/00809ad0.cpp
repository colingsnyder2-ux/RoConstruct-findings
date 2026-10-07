// roc 2009-06 00809ad0  unit: CXTPDockingPane  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809ad0
//
// 00809ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00809ad4  894114               mov dword ptr [ecx + 0x14], eax
// 00809ad7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00809ad0 {
    char pad0[20];
    int m_x;
    void f(int a1);
};
void S_func_00809ad0::f(int a1)
{
    m_x = (int)a1;
}
