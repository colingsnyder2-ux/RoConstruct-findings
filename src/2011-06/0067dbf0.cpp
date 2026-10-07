// roc 2011-06 0067dbf0  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dbf0
//
// 0067dbf0  d981dc010000         fld dword ptr [ecx + 0x1dc]
// 0067dbf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067dbf0 {
    char pad[476];
    float m_x;
    float f();
};
float S_func_0067dbf0::f()
{
    return m_x;
}
