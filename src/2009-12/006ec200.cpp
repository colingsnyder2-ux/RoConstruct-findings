// roc 2009-12 006ec200  unit: RBX::Block  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec200
//
// 006ec200  d94114               fld dword ptr [ecx + 0x14]
// 006ec203  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0066f7e0@ns_ROCX0000e2@@QAEMXZ)

namespace ns_ROCX0000e2 {
struct S_func_0066f7e0 {
    char pad[20];
    float m_x;
    float f();
};
float S_func_0066f7e0::f()
{
    return m_x;
}
}
