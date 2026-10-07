// roc 2012-06 004b9540  unit: RBX::ViewBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9540
//
// 004b9540  d981b4010000         fld dword ptr [ecx + 0x1b4]
// 004b9546  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9540 {
    char pad[436];
    float m_x;
    float f();
};
float S_func_004b9540::f()
{
    return m_x;
}
