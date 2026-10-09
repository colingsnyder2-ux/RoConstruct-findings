// roc 2009-12 006da900  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da900
//
// 006da900  8a8139010000         mov al, byte ptr [ecx + 0x139]
// 006da906  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00650230@ns_ROCX0000bf@@QAEDXZ)

namespace ns_ROCX0000bf {
struct S_func_00650230 {
    char pad0[313];
    char m_x;
    char f();
};
char S_func_00650230::f()
{
    return m_x;
}
}
