// roc 2010-06 0066c210  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c210
//
// 0066c210  d981dc010000         fld dword ptr [ecx + 0x1dc]
// 0066c216  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066c210 {
    char pad[476];
    float m_x;
    float f();
};
float S_func_0066c210::f()
{
    return m_x;
}
