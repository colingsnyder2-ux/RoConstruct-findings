// roc 2009-12 006cbd20  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cbd20
//
// 006cbd20  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 006cbd26  e9651e0200           jmp 0x6edb90
// copied from an identical function in another client (function ?f@S_func_006379d0@ns_ROCX000092@@QAEXXZ)

namespace ns_ROCX000092 {
struct P_func_006379d0 { void g(); };
struct S_func_006379d0 {
    char pad[360];
    P_func_006379d0* m_p;
    void f();
};
void S_func_006379d0::f()
{
    m_p->g();
}
}
