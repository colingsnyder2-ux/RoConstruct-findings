// roc 2010-06 0058da20  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058da20
//
// 0058da20  d981a0000000         fld dword ptr [ecx + 0xa0]
// 0058da26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058da20 {
    char pad[160];
    float m_x;
    float f();
};
float S_func_0058da20::f()
{
    return m_x;
}
