// roc 2011-06 00663e20  unit: RBX::CoreScript  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00663e20
//
// 00663e20  8d810c010000         lea eax, [ecx + 0x10c]
// 00663e26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00663e20 {
    char pad0[268];
    int m_x;
    int* f();
};
int* S_func_00663e20::f()
{
    return &m_x;
}
