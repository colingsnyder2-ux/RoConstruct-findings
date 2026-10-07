// roc 2011-06 00652650  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652650
//
// 00652650  d981d4000000         fld dword ptr [ecx + 0xd4]
// 00652656  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00652650 {
    char pad[212];
    float m_x;
    float f();
};
float S_func_00652650::f()
{
    return m_x;
}
