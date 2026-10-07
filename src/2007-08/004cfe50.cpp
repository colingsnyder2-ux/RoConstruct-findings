// roc 2007-08 004cfe50  unit: RBX::TextureProxyBase  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe50
//
// 004cfe50  d9819c010000         fld dword ptr [ecx + 0x19c]
// 004cfe56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cfe50 {
    char pad[412];
    float m_x;
    float f();
};
float S_func_004cfe50::f()
{
    return m_x;
}
