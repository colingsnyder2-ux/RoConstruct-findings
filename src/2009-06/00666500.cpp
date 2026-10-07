// roc 2009-06 00666500  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666500
//
// 00666500  d981dc010000         fld dword ptr [ecx + 0x1dc]
// 00666506  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666500 {
    char pad[476];
    float m_x;
    float f();
};
float S_func_00666500::f()
{
    return m_x;
}
