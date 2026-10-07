// roc 2011-06 0066bee0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066bee0
//
// 0066bee0  d9817c010000         fld dword ptr [ecx + 0x17c]
// 0066bee6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066bee0 {
    char pad[380];
    float m_x;
    float f();
};
float S_func_0066bee0::f()
{
    return m_x;
}
