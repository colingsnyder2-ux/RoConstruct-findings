// roc 2011-06 0060abc0  unit: RBX::VerbContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060abc0
//
// 0060abc0  8d81d8000000         lea eax, [ecx + 0xd8]
// 0060abc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0060abc0 {
    char pad0[216];
    int m_x;
    int* f();
};
int* S_func_0060abc0::f()
{
    return &m_x;
}
