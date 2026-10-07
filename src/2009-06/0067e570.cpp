// roc 2009-06 0067e570  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e570
//
// 0067e570  8d81bc000000         lea eax, [ecx + 0xbc]
// 0067e576  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067e570 {
    char pad0[188];
    int m_x;
    int* f();
};
int* S_func_0067e570::f()
{
    return &m_x;
}
