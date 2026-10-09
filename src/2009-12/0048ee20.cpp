// roc 2009-12 0048ee20  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ee20
//
// 0048ee20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048ee23  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0043d8b0@ns_ROCX00009d@@QAEHXZ)

namespace ns_ROCX00009d {
struct S_func_0043d8b0 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_0043d8b0::f()
{
    return m_x;
}
}
