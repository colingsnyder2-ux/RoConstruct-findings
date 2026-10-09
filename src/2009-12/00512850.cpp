// roc 2009-12 00512850  unit: RBX::Network::Players  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00512850
//
// 00512850  8b442404             mov eax, dword ptr [esp + 4]
// 00512854  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 0051285a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004bfdc0@ns_ROCX0000c1@@QAEXH@Z)

namespace ns_ROCX0000c1 {
struct S_func_004bfdc0 {
    char pad0[364];
    int m_x;
    void f(int a1);
};
void S_func_004bfdc0::f(int a1)
{
    m_x = (int)a1;
}
}
