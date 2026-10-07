// roc 2010-06 00490dd0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490dd0
//
// 00490dd0  8b01                 mov eax, dword ptr [ecx]
// 00490dd2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00490dd0 {
    int m_x;
    int f();
};
int S_func_00490dd0::f()
{
    return m_x;
}
