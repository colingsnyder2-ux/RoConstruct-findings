// roc 2012-06 00478680  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00478680
//
// 00478680  8b442404             mov eax, dword ptr [esp + 4]
// 00478684  898100010000         mov dword ptr [ecx + 0x100], eax
// 0047868a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00478680 {
    char pad0[256];
    int m_x;
    void f(int a1);
};
void S_func_00478680::f(int a1)
{
    m_x = (int)a1;
}
