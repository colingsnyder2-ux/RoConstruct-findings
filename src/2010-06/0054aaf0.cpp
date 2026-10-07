// roc 2010-06 0054aaf0  unit: RBX::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054aaf0
//
// 0054aaf0  8d4178               lea eax, [ecx + 0x78]
// 0054aaf3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054aaf0 {
    char pad0[120];
    int m_x;
    int* f();
};
int* S_func_0054aaf0::f()
{
    return &m_x;
}
