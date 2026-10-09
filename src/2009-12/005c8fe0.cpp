// roc 2009-12 005c8fe0  unit: RBX::WedgeBuilder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005c8fe0
//
// 005c8fe0  d981bc010000         fld dword ptr [ecx + 0x1bc]
// 005c8fe6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00636c20@ns_ROCX00008d@@QAEMXZ)

namespace ns_ROCX00008d {
struct S_func_00636c20 {
    char pad[444];
    float m_x;
    float f();
};
float S_func_00636c20::f()
{
    return m_x;
}
}
