// roc 2010-06 0052c0f0  unit: RBX::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c0f0
//
// 0052c0f0  d9415c               fld dword ptr [ecx + 0x5c]
// 0052c0f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052c0f0 {
    char pad[92];
    float m_x;
    float f();
};
float S_func_0052c0f0::f()
{
    return m_x;
}
