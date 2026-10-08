// roc 2007-08 004fc060  unit: RBX::Render::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc060
//
// 004fc060  8d4124               lea eax, [ecx + 0x24]
// 004fc063  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fc060 {
    char pad0[36];
    int m_x;
    int* f();
};
int* S_func_004fc060::f()
{
    return &m_x;
}
