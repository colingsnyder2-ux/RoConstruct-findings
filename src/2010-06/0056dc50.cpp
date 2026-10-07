// roc 2010-06 0056dc50  unit: G3D::LineSegment  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056dc50
//
// 0056dc50  dd4118               fld qword ptr [ecx + 0x18]
// 0056dc53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0056dc50 {
    char pad[24];
    double m_x;
    double f();
};
double S_func_0056dc50::f()
{
    return m_x;
}
