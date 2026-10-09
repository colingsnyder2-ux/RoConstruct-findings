// roc 2009-12 00565bf0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00565bf0
//
// 00565bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00565bf4  8981800b0000         mov dword ptr [ecx + 0xb80], eax
// 00565bfa  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004fe550@ns_ROCX00000d@@QAEXH@Z)

namespace ns_ROCX00000d {
struct S_func_004fe550 {
    char pad0[2944];
    int m_x;
    void f(int a1);
};
void S_func_004fe550::f(int a1)
{
    m_x = (int)a1;
}
}
