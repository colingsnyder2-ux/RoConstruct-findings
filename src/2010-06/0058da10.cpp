// roc 2010-06 0058da10  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058da10
//
// 0058da10  d9819c000000         fld dword ptr [ecx + 0x9c]
// 0058da16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058da10 {
    char pad[156];
    float m_x;
    float f();
};
float S_func_0058da10::f()
{
    return m_x;
}
