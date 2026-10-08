// roc 2007-08 00580e80  unit: RBX::Log  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580e80
//
// 00580e80  8d8100010000         lea eax, [ecx + 0x100]
// 00580e86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00580e80 {
    char pad0[256];
    int m_x;
    int* f();
};
int* S_func_00580e80::f()
{
    return &m_x;
}
