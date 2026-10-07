// roc 2009-06 00666510  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666510
//
// 00666510  d981e0010000         fld dword ptr [ecx + 0x1e0]
// 00666516  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666510 {
    char pad[480];
    float m_x;
    float f();
};
float S_func_00666510::f()
{
    return m_x;
}
