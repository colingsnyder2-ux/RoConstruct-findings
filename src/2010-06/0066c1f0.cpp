// roc 2010-06 0066c1f0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c1f0
//
// 0066c1f0  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 0066c1f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c1f0 {
    char pad[468];
    float m_x;
    float f();
};
float S_func_0066c1f0::f()
{
    return m_x;
}
