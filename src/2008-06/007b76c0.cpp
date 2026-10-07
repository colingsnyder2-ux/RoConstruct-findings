// roc 2008-06 007b76c0  unit: RBX::RenderNew::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b76c0
//
// 007b76c0  d94120               fld dword ptr [ecx + 0x20]
// 007b76c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b76c0 {
    char pad[32];
    float m_x;
    float f();
};
float S_func_007b76c0::f()
{
    return m_x;
}
