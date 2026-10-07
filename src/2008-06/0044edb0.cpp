// roc 2008-06 0044edb0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044edb0
//
// 0044edb0  8b442404             mov eax, dword ptr [esp + 4]
// 0044edb4  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 0044edba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0044edb0 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_0044edb0::f(int a1)
{
    m_x = (int)a1;
}
