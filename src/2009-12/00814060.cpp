// roc 2009-12 00814060  unit: CXTPCommandBars  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814060
//
// 00814060  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00814066  e9d53efeff           jmp 0x7f7f40
// copied from an identical function in another client (function ?f@S_func_00729380@ns_ROCX000042@@QAEXXZ)

namespace ns_ROCX000042 {
struct P_func_00729380 { void g(); };
struct S_func_00729380 {
    char pad[188];
    P_func_00729380* m_p;
    void f();
};
void S_func_00729380::f()
{
    m_p->g();
}
}
