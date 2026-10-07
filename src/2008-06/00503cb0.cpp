// roc 2008-06 00503cb0  unit: RBX::RenderBase::RenderSceneBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503cb0
//
// 00503cb0  d94124               fld dword ptr [ecx + 0x24]
// 00503cb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00503cb0 {
    char pad[36];
    float m_x;
    float f();
};
float S_func_00503cb0::f()
{
    return m_x;
}
