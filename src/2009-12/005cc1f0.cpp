// roc 2009-12 005cc1f0  unit: RBX::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cc1f0
//
// 005cc1f0  d9415c               fld dword ptr [ecx + 0x5c]
// 005cc1f3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0052c0f0@ns_ROCX000013@@QAEMXZ)

namespace ns_ROCX000013 {
struct S_func_0052c0f0 {
    char pad[92];
    float m_x;
    float f();
};
float S_func_0052c0f0::f()
{
    return m_x;
}
}
