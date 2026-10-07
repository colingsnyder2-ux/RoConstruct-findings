// roc 2010-06 00491de0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491de0
//
// 00491de0  8d81d8070000         lea eax, [ecx + 0x7d8]
// 00491de6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00491de0 {
    char pad0[2008];
    int m_x;
    int* f();
};
int* S_func_00491de0::f()
{
    return &m_x;
}
