// roc 2009-12 00552ff0  unit: RBX::Network::ClientReplicator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552ff0
//
// 00552ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00552ff4  8981d8060000         mov dword ptr [ecx + 0x6d8], eax
// 00552ffa  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004f50b0@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
struct S_func_004f50b0 {
    char pad0[1752];
    int m_x;
    void f(int a1);
};
void S_func_004f50b0::f(int a1)
{
    m_x = (int)a1;
}
}
