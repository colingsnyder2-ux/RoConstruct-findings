// roc 2008-06 007b76b0  unit: RBX::RenderNew::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b76b0
//
// 007b76b0  d9411c               fld dword ptr [ecx + 0x1c]
// 007b76b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b76b0 {
    char pad[28];
    float m_x;
    float f();
};
float S_func_007b76b0::f()
{
    return m_x;
}
