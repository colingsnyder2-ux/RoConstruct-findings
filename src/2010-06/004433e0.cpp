// roc 2010-06 004433e0  unit: RBX::TextureProxyBase  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004433e0
//
// 004433e0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004433e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004433e0 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_004433e0::f()
{
    return m_x;
}
