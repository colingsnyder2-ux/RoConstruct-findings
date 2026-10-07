// roc 2010-06 0066c250  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c250
//
// 0066c250  d981d0010000         fld dword ptr [ecx + 0x1d0]
// 0066c256  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c250 {
    char pad[464];
    float m_x;
    float f();
};
float S_func_0066c250::f()
{
    return m_x;
}
