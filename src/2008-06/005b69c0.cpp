// roc 2008-06 005b69c0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b69c0
//
// 005b69c0  d98160010000         fld dword ptr [ecx + 0x160]
// 005b69c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b69c0 {
    char pad[352];
    float m_x;
    float f();
};
float S_func_005b69c0::f()
{
    return m_x;
}
