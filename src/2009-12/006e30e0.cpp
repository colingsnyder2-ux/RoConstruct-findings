// roc 2009-12 006e30e0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e30e0
//
// 006e30e0  d981c8010000         fld dword ptr [ecx + 0x1c8]
// 006e30e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e30e0 {
    char pad[456];
    float m_x;
    float f();
};
float S_func_006e30e0::f()
{
    return m_x;
}
