// roc 2010-06 0059c620  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059c620
//
// 0059c620  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 0059c626  e995f21f00           jmp 0x79b8c0
// auto-matched from its assembly shape

struct P_func_0059c620 { void g(); };
struct S_func_0059c620 {
    char pad[152];
    P_func_0059c620* m_p;
    void f();
};
void S_func_0059c620::f()
{
    m_p->g();
}
