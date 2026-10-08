// roc 2007-03 005ae6b0  unit: seg_005a0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae6b0
//
// 005ae6b0  d94110               fld dword ptr [ecx + 0x10]
// 005ae6b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005ae6b0 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_005ae6b0::f()
{
    return m_x;
}
