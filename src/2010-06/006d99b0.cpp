// roc 2010-06 006d99b0  unit: RBX::Sparkles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d99b0
//
// 006d99b0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 006d99b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d99b0 {
    char pad0[188];
    int m_x;
    int f();
};
int S_func_006d99b0::f()
{
    return m_x;
}
