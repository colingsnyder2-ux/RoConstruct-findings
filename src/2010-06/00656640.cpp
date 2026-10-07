// roc 2010-06 00656640  unit: RBX::Pose  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656640
//
// 00656640  d98194000000         fld dword ptr [ecx + 0x94]
// 00656646  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00656640 {
    char pad[148];
    float m_x;
    float f();
};
float S_func_00656640::f()
{
    return m_x;
}
