// roc 2010-06 0059c610  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059c610
//
// 0059c610  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 0059c616  e9b5f21f00           jmp 0x79b8d0
// auto-matched from its assembly shape

struct P_func_0059c610 { void g(); };
struct S_func_0059c610 {
    char pad[152];
    P_func_0059c610* m_p;
    void f();
};
void S_func_0059c610::f()
{
    m_p->g();
}
