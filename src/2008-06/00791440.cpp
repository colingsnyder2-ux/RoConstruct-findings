// roc 2008-06 00791440  unit: CXTPDockingPane  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791440
//
// 00791440  8b442404             mov eax, dword ptr [esp + 4]
// 00791444  894114               mov dword ptr [ecx + 0x14], eax
// 00791447  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00791440 {
    char pad0[20];
    int m_x;
    void f(int a1);
};
void S_func_00791440::f(int a1)
{
    m_x = (int)a1;
}
