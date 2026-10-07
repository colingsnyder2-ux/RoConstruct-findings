// roc 2011-06 00652640  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652640
//
// 00652640  d981d0000000         fld dword ptr [ecx + 0xd0]
// 00652646  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00652640 {
    char pad[208];
    float m_x;
    float f();
};
float S_func_00652640::f()
{
    return m_x;
}
