// roc 2009-12 007b4b80  unit: RBX::VHandles::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b4b80
//
// 007b4b80  8a4118               mov al, byte ptr [ecx + 0x18]
// 007b4b83  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006d7080@ns_ROCX000000@@QAEDXZ)

namespace ns_ROCX000000 {
struct S_func_006d7080 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_006d7080::f()
{
    return m_x;
}
}
