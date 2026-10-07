// roc 2008-06 00477850  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477850
//
// 00477850  8d81a8070000         lea eax, [ecx + 0x7a8]
// 00477856  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00477850 {
    char pad0[1960];
    int m_x;
    int* f();
};
int* S_func_00477850::f()
{
    return &m_x;
}
