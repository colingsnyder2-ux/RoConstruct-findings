// roc 2009-12 00566300  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00566300
//
// 00566300  8b442404             mov eax, dword ptr [esp + 4]
// 00566304  89817c0a0000         mov dword ptr [ecx + 0xa7c], eax
// 0056630a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004fec60@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
struct S_func_004fec60 {
    char pad0[2684];
    int m_x;
    void f(int a1);
};
void S_func_004fec60::f(int a1)
{
    m_x = (int)a1;
}
}
