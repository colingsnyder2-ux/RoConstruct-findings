// roc 2011-06 0067dba0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dba0
//
// 0067dba0  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 0067dba6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067dba0 {
    char pad[488];
    float m_x;
    float f();
};
float S_func_0067dba0::f()
{
    return m_x;
}
