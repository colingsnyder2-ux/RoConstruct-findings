// roc 2009-12 008375e0  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008375e0
//
// 008375e0  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008375e6  e9b5e5ffff           jmp 0x835ba0
// copied from an identical function in another client (function ?f@S_func_0075c870@ns_ROCX000050@@QAEXXZ)

namespace ns_ROCX000050 {
struct P_func_0075c870 { void g(); };
struct S_func_0075c870 {
    char pad[252];
    P_func_0075c870* m_p;
    void f();
};
void S_func_0075c870::f()
{
    m_p->g();
}
}
