// roc 2009-06 00666550  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666550
//
// 00666550  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 00666556  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666550 {
    char pad[468];
    float m_x;
    float f();
};
float S_func_00666550::f()
{
    return m_x;
}
