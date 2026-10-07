// roc 2012-06 00462280  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462280
//
// 00462280  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00462283  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00462280 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00462280::f()
{
    return m_x;
}
