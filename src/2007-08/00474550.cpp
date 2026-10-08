// roc 2007-08 00474550  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474550
//
// 00474550  8d81a8070000         lea eax, [ecx + 0x7a8]
// 00474556  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00474550 {
    char pad0[1960];
    int m_x;
    int* f();
};
int* S_func_00474550::f()
{
    return &m_x;
}
