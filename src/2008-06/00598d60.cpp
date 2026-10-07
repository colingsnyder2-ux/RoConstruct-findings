// roc 2008-06 00598d60  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598d60
//
// 00598d60  d981dc020000         fld dword ptr [ecx + 0x2dc]
// 00598d66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598d60 {
    char pad[732];
    float m_x;
    float f();
};
float S_func_00598d60::f()
{
    return m_x;
}
