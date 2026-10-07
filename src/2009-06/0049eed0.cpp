// roc 2009-06 0049eed0  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049eed0
//
// 0049eed0  8d81d8070000         lea eax, [ecx + 0x7d8]
// 0049eed6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049eed0 {
    char pad0[2008];
    int m_x;
    int* f();
};
int* S_func_0049eed0::f()
{
    return &m_x;
}
