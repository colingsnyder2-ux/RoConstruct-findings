// roc 2009-06 0067e710  unit: RBX::Mechanism  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e710
//
// 0067e710  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0067e716  e935380300           jmp 0x6b1f50
// auto-matched from its assembly shape

struct P_func_0067e710 { void g(); };
struct S_func_0067e710 {
    char pad[176];
    P_func_0067e710* m_p;
    void f();
};
void S_func_0067e710::f()
{
    m_p->g();
}
