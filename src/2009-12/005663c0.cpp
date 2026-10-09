// roc 2009-12 005663c0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005663c0
//
// 005663c0  8b442404             mov eax, dword ptr [esp + 4]
// 005663c4  8981900a0000         mov dword ptr [ecx + 0xa90], eax
// 005663ca  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004fed20@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
struct S_func_004fed20 {
    char pad0[2704];
    int m_x;
    void f(int a1);
};
void S_func_004fed20::f(int a1)
{
    m_x = (int)a1;
}
}
