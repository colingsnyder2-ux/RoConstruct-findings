// roc 2011-06 0067db80  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067db80
//
// 0067db80  d981e0010000         fld dword ptr [ecx + 0x1e0]
// 0067db86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067db80 {
    char pad[480];
    float m_x;
    float f();
};
float S_func_0067db80::f()
{
    return m_x;
}
