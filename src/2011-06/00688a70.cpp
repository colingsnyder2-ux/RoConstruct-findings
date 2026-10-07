// roc 2011-06 00688a70  unit: RBX::Pose  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688a70
//
// 00688a70  d98190000000         fld dword ptr [ecx + 0x90]
// 00688a76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00688a70 {
    char pad[144];
    float m_x;
    float f();
};
float S_func_00688a70::f()
{
    return m_x;
}
