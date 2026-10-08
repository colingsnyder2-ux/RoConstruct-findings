// roc 2007-03 005ae680  unit: seg_005a0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae680
//
// 005ae680  d94114               fld dword ptr [ecx + 0x14]
// 005ae683  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005ae680 {
    char pad[20];
    float m_x;
    float f();
};
float S_func_005ae680::f()
{
    return m_x;
}
