// roc 2009-06 0067e700  unit: RBX::Mechanism  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e700
//
// 0067e700  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0067e706  e955270300           jmp 0x6b0e60
// auto-matched from its assembly shape

struct P_func_0067e700 { void g(); };
struct S_func_0067e700 {
    char pad[176];
    P_func_0067e700* m_p;
    void f();
};
void S_func_0067e700::f()
{
    m_p->g();
}
