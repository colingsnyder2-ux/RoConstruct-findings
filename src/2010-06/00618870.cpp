// roc 2010-06 00618870  unit: RBX::Reflection::Descriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00618870
//
// 00618870  8d81c8000000         lea eax, [ecx + 0xc8]
// 00618876  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00618870 {
    char pad0[200];
    int m_x;
    int* f();
};
int* S_func_00618870::f()
{
    return &m_x;
}
