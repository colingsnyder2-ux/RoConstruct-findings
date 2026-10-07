// roc 2010-06 004545a0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004545a0
//
// 004545a0  8b442404             mov eax, dword ptr [esp + 4]
// 004545a4  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 004545aa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004545a0 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_004545a0::f(int a1)
{
    m_x = (int)a1;
}
