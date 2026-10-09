// roc 2009-12 00859f00  unit: CSelectionCaption  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859f00
//
// 00859f00  8b4908               mov ecx, dword ptr [ecx + 8]
// 00859f03  e95aa3f9ff           jmp 0x7f4262
// copied from an identical function in another client (function ?f@S_func_0077ee40@ns_ROCX0000d0@@QAEXXZ)

namespace ns_ROCX0000d0 {
struct P_func_0077ee40 { void g(); };
struct S_func_0077ee40 {
    char pad[8];
    P_func_0077ee40* m_p;
    void f();
};
void S_func_0077ee40::f()
{
    m_p->g();
}
}
