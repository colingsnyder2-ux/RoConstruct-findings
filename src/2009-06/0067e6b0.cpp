// roc 2009-06 0067e6b0  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e6b0
//
// 0067e6b0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 0067e6b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067e6b0 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_0067e6b0::f()
{
    return m_x;
}
