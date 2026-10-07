// roc 2011-06 0068ce50  unit: RBX::Backpack  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068ce50
//
// 0068ce50  d94130               fld dword ptr [ecx + 0x30]
// 0068ce53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068ce50 {
    char pad[48];
    float m_x;
    float f();
};
float S_func_0068ce50::f()
{
    return m_x;
}
