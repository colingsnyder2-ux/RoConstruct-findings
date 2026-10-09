// roc 2009-12 006ec230  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec230
//
// 006ec230  d94110               fld dword ptr [ecx + 0x10]
// 006ec233  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0066f810@ns_ROCX0000e3@@QAEMXZ)

namespace ns_ROCX0000e3 {
struct S_func_0066f810 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_0066f810::f()
{
    return m_x;
}
}
