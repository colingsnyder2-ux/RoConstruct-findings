// roc 2009-06 005c8b90  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8b90
//
// 005c8b90  d98190000000         fld dword ptr [ecx + 0x90]
// 005c8b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005c8b90 {
    char pad[144];
    float m_x;
    float f();
};
float S_func_005c8b90::f()
{
    return m_x;
}
