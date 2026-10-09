// roc 2009-12 00574e10  unit: RBX::RbxParticleEmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574e10
//
// 00574e10  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 00574e16  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0069b970@ns_ROCX000015@@QAEHXZ)

namespace ns_ROCX000015 {
struct S_func_0069b970 {
    char pad0[344];
    int m_x;
    int f();
};
int S_func_0069b970::f()
{
    return m_x;
}
}
