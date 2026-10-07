// roc 2011-06 0046d810  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d810
//
// 0046d810  8b442404             mov eax, dword ptr [esp + 4]
// 0046d814  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 0046d81a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0046d810 {
    char pad0[208];
    int m_x;
    void f(int a1);
};
void S_func_0046d810::f(int a1)
{
    m_x = (int)a1;
}
