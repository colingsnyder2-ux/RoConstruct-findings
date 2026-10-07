// roc 2010-06 005e6e20  unit: RBX::VerbContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e6e20
//
// 005e6e20  8d81d8000000         lea eax, [ecx + 0xd8]
// 005e6e26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6e20 {
    char pad0[216];
    int m_x;
    int* f();
};
int* S_func_005e6e20::f()
{
    return &m_x;
}
