// roc 2011-06 0066c140  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066c140
//
// 0066c140  8d8184010000         lea eax, [ecx + 0x184]
// 0066c146  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c140 {
    char pad0[388];
    int m_x;
    int* f();
};
int* S_func_0066c140::f()
{
    return &m_x;
}
