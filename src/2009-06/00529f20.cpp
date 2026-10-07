// roc 2009-06 00529f20  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529f20
//
// 00529f20  8d81a4000000         lea eax, [ecx + 0xa4]
// 00529f26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00529f20 {
    char pad0[164];
    int m_x;
    int* f();
};
int* S_func_00529f20::f()
{
    return &m_x;
}
