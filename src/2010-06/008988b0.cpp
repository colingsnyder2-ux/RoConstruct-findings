// roc 2010-06 008988b0  unit: CXTPDockingPane  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008988b0
//
// 008988b0  8b442404             mov eax, dword ptr [esp + 4]
// 008988b4  894114               mov dword ptr [ecx + 0x14], eax
// 008988b7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008988b0 {
    char pad0[20];
    int m_x;
    void f(int a1);
};
void S_func_008988b0::f(int a1)
{
    m_x = (int)a1;
}
