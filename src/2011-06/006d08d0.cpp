// roc 2011-06 006d08d0  unit: seg_006d0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d08d0
//
// 006d08d0  d9818c010000         fld dword ptr [ecx + 0x18c]
// 006d08d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d08d0 {
    char pad[396];
    float m_x;
    float f();
};
float S_func_006d08d0::f()
{
    return m_x;
}
