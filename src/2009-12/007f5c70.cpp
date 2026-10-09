// roc 2009-12 007f5c70  unit: CXTPControlAction  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5c70
//
// 007f5c70  8b4170               mov eax, dword ptr [ecx + 0x70]
// 007f5c73  8b4034               mov eax, dword ptr [eax + 0x34]
// 007f5c76  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071f650@ns_ROCX00002e@@QAEHXZ)

namespace ns_ROCX00002e {
struct I_func_0071f650 {
    char pad[52];
    int m_x;
};
struct S_func_0071f650 {
    char pad[112];
    I_func_0071f650* m_p;
    int f();
};
int S_func_0071f650::f()
{
    return m_p->m_x;
}
}
