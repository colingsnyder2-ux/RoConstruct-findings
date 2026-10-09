// roc 2009-12 008ea520  unit: CXTPRibbonTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea520
//
// 008ea520  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 008ea526  e935370000           jmp 0x8edc60
// copied from an identical function in another client (function ?f@S_func_0080fa30@ns_ROCX00008a@@QAEXXZ)

namespace ns_ROCX00008a {
struct P_func_0080fa30 { void g(); };
struct S_func_0080fa30 {
    char pad[132];
    P_func_0080fa30* m_p;
    void f();
};
void S_func_0080fa30::f()
{
    m_p->g();
}
}
