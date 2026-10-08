// roc 2007-03 00444430  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444430
//
// 00444430  d981f0000000         fld dword ptr [ecx + 0xf0]
// 00444436  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444430 {
    char pad[240];
    float m_x;
    float f();
};
float S_func_00444430::f()
{
    return m_x;
}
