// roc 2010-06 00699960  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699960
//
// 00699960  8d81cc000000         lea eax, [ecx + 0xcc]
// 00699966  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00699960 {
    char pad0[204];
    int m_x;
    int* f();
};
int* S_func_00699960::f()
{
    return &m_x;
}
