// roc 2011-06 006a3030  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3030
//
// 006a3030  d94110               fld dword ptr [ecx + 0x10]
// 006a3033  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a3030 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_006a3030::f()
{
    return m_x;
}
