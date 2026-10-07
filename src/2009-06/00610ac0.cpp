// roc 2009-06 00610ac0  unit: RBX::VerbContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00610ac0
//
// 00610ac0  8d81d0000000         lea eax, [ecx + 0xd0]
// 00610ac6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00610ac0 {
    char pad0[208];
    int m_x;
    int* f();
};
int* S_func_00610ac0::f()
{
    return &m_x;
}
