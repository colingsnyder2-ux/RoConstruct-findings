// roc 2011-06 00652660  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652660
//
// 00652660  d981d8000000         fld dword ptr [ecx + 0xd8]
// 00652666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00652660 {
    char pad[216];
    float m_x;
    float f();
};
float S_func_00652660::f()
{
    return m_x;
}
