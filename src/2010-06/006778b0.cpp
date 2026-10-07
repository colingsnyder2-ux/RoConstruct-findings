// roc 2010-06 006778b0  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006778b0
//
// 006778b0  d94110               fld dword ptr [ecx + 0x10]
// 006778b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006778b0 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_006778b0::f()
{
    return m_x;
}
