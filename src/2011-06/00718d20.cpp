// roc 2011-06 00718d20  unit: RBX::NotificationObject  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00718d20
//
// 00718d20  8d81b0000000         lea eax, [ecx + 0xb0]
// 00718d26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00718d20 {
    char pad0[176];
    int m_x;
    int* f();
};
int* S_func_00718d20::f()
{
    return &m_x;
}
