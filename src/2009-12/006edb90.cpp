// roc 2009-12 006edb90  unit: RBX::Primitive  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006edb90
//
// 006edb90  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 006edb96  e915f9ffff           jmp 0x6ed4b0
// copied from an identical function in another client (function ?f@S_func_00679420@ns_ROCX0000f5@@QAEXXZ)

namespace ns_ROCX0000f5 {
struct P_func_00679420 { void g(); };
struct S_func_00679420 {
    char pad[244];
    P_func_00679420* m_p;
    void f();
};
void S_func_00679420::f()
{
    m_p->g();
}
}
