// roc 2009-06 0049eec0  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049eec0
//
// 0049eec0  8d81a8070000         lea eax, [ecx + 0x7a8]
// 0049eec6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049eec0 {
    char pad0[1960];
    int m_x;
    int* f();
};
int* S_func_0049eec0::f()
{
    return &m_x;
}
