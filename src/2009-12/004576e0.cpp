// roc 2009-12 004576e0  unit: VCRobloxDoc::?$VerbBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004576e0
//
// 004576e0  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004576e3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0044fd40@ns_ROCX0000ca@@QAEHXZ)

namespace ns_ROCX0000ca {
struct S_func_0044fd40 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_0044fd40::f()
{
    return m_x;
}
}
