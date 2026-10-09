// roc 2009-12 006da970  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da970
//
// 006da970  8b8128010000         mov eax, dword ptr [ecx + 0x128]
// 006da976  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006502c0@ns_ROCX0000c0@@QAEHXZ)

namespace ns_ROCX0000c0 {
struct S_func_006502c0 {
    char pad0[296];
    int m_x;
    int f();
};
int S_func_006502c0::f()
{
    return m_x;
}
}
