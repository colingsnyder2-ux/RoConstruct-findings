// roc 2007-03 00444440  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444440
//
// 00444440  d981f4000000         fld dword ptr [ecx + 0xf4]
// 00444446  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444440 {
    char pad[244];
    float m_x;
    float f();
};
float S_func_00444440::f()
{
    return m_x;
}
