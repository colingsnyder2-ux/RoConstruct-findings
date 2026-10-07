// roc 2008-06 005834b0  unit: RBX::VerbContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005834b0
//
// 005834b0  8d81b0010000         lea eax, [ecx + 0x1b0]
// 005834b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005834b0 {
    char pad0[432];
    int m_x;
    int* f();
};
int* S_func_005834b0::f()
{
    return &m_x;
}
