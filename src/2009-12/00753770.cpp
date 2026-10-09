// roc 2009-12 00753770  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753770
//
// 00753770  8b816c030000         mov eax, dword ptr [ecx + 0x36c]
// 00753776  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006da2f0@ns_ROCX00006e@@QAEHXZ)

namespace ns_ROCX00006e {
struct S_func_006da2f0 {
    char pad0[876];
    int m_x;
    int f();
};
int S_func_006da2f0::f()
{
    return m_x;
}
}
