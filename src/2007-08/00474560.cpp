// roc 2007-08 00474560  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474560
//
// 00474560  8d81d8070000         lea eax, [ecx + 0x7d8]
// 00474566  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00474560 {
    char pad0[2008];
    int m_x;
    int* f();
};
int* S_func_00474560::f()
{
    return &m_x;
}
