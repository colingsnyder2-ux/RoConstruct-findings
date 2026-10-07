// roc 2010-06 0066c200  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c200
//
// 0066c200  d981d8010000         fld dword ptr [ecx + 0x1d8]
// 0066c206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c200 {
    char pad[472];
    float m_x;
    float f();
};
float S_func_0066c200::f()
{
    return m_x;
}
