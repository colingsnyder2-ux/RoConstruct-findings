// roc 2008-06 00598d50  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598d50
//
// 00598d50  d981d8020000         fld dword ptr [ecx + 0x2d8]
// 00598d56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598d50 {
    char pad[728];
    float m_x;
    float f();
};
float S_func_00598d50::f()
{
    return m_x;
}
