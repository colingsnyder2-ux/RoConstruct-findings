// roc 2007-08 004cfec0  unit: RBX::TextureProxyBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfec0
//
// 004cfec0  d98110010000         fld dword ptr [ecx + 0x110]
// 004cfec6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cfec0 {
    char pad[272];
    float m_x;
    float f();
};
float S_func_004cfec0::f()
{
    return m_x;
}
