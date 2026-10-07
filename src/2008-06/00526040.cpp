// roc 2008-06 00526040  unit: G3D::Line  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526040
//
// 00526040  dd4118               fld qword ptr [ecx + 0x18]
// 00526043  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00526040 {
    char pad[24];
    double m_x;
    double f();
};
double S_func_00526040::f()
{
    return m_x;
}
