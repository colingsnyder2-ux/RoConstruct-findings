// roc 2008-06 007b76d0  unit: RBX::RenderBase::RenderSceneBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b76d0
//
// 007b76d0  d94128               fld dword ptr [ecx + 0x28]
// 007b76d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b76d0 {
    char pad[40];
    float m_x;
    float f();
};
float S_func_007b76d0::f()
{
    return m_x;
}
