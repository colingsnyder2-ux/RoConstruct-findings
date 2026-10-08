// roc 2007-03 00444460  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444460
//
// 00444460  d981fc000000         fld dword ptr [ecx + 0xfc]
// 00444466  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444460 {
    char pad[252];
    float m_x;
    float f();
};
float S_func_00444460::f()
{
    return m_x;
}
