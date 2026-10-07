// roc 2011-06 00921650  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00921650
//
// 00921650  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00921653  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00921650 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00921650::f()
{
    return m_x;
}
