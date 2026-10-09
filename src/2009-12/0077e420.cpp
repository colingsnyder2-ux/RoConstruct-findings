// roc 2009-12 0077e420  unit: RBX::BlockBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077e420
//
// 0077e420  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0077e423  e968fdffff           jmp 0x77e190
// copied from an identical function in another client (function ?f@S_func_00713fc0@ns_ROCX00002e@@QAEXXZ)

namespace ns_ROCX00002e {
struct P_func_00713fc0 { void g(); };
struct S_func_00713fc0 {
    char pad[36];
    P_func_00713fc0* m_p;
    void f();
};
void S_func_00713fc0::f()
{
    m_p->g();
}
}
