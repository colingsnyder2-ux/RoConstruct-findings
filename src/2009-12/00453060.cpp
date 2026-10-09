// roc 2009-12 00453060  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453060
//
// 00453060  8b442404             mov eax, dword ptr [esp + 4]
// 00453064  898100010000         mov dword ptr [ecx + 0x100], eax
// 0045306a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0044cea0@ns_ROCX0000b9@@QAEXH@Z)

namespace ns_ROCX0000b9 {
struct S_func_0044cea0 {
    char pad0[256];
    int m_x;
    void f(int a1);
};
void S_func_0044cea0::f(int a1)
{
    m_x = (int)a1;
}
}
