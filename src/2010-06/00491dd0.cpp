// roc 2010-06 00491dd0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491dd0
//
// 00491dd0  8d81a8070000         lea eax, [ecx + 0x7a8]
// 00491dd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00491dd0 {
    char pad0[1960];
    int m_x;
    int* f();
};
int* S_func_00491dd0::f()
{
    return &m_x;
}
