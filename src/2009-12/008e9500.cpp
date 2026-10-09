// roc 2009-12 008e9500  unit: CXTPRibbonGroupControlPopup  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9500
//
// 008e9500  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008e9503  8b4034               mov eax, dword ptr [eax + 0x34]
// 008e9506  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0080ea10@ns_ROCX000086@@QAEHXZ)

namespace ns_ROCX000086 {
struct I_func_0080ea10 {
    char pad[52];
    int m_x;
};
struct S_func_0080ea10 {
    char pad[48];
    I_func_0080ea10* m_p;
    int f();
};
int S_func_0080ea10::f()
{
    return m_p->m_x;
}
}
