// roc 2011-06 0067db90  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067db90
//
// 0067db90  d981e4010000         fld dword ptr [ecx + 0x1e4]
// 0067db96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067db90 {
    char pad[484];
    float m_x;
    float f();
};
float S_func_0067db90::f()
{
    return m_x;
}
