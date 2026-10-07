// roc 2009-06 00516650  unit: RBX::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00516650
//
// 00516650  d9410c               fld dword ptr [ecx + 0xc]
// 00516653  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00516650 {
    char pad[12];
    float m_x;
    float f();
};
float S_func_00516650::f()
{
    return m_x;
}
