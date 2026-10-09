// roc 2009-12 007f6060  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6060
//
// 007f6060  8b442404             mov eax, dword ptr [esp + 4]
// 007f6064  8981d4000000         mov dword ptr [ecx + 0xd4], eax
// 007f606a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0071fa40@ns_ROCX000031@@QAEXH@Z)

namespace ns_ROCX000031 {
struct S_func_0071fa40 {
    char pad0[212];
    int m_x;
    void f(int a1);
};
void S_func_0071fa40::f(int a1)
{
    m_x = (int)a1;
}
}
