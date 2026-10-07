// roc 2008-06 0059bb20  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059bb20
//
// 0059bb20  8d8128020000         lea eax, [ecx + 0x228]
// 0059bb26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059bb20 {
    char pad0[552];
    int m_x;
    int* f();
};
int* S_func_0059bb20::f()
{
    return &m_x;
}
