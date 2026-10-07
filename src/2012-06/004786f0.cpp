// roc 2012-06 004786f0  unit: CMainFrame  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004786f0
//
// 004786f0  8b442404             mov eax, dword ptr [esp + 4]
// 004786f4  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 004786fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004786f0 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_004786f0::f(int a1)
{
    m_x = (int)a1;
}
