// roc 2010-06 006760c0  unit: RBX::VHumanoid::?$EventDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006760c0
//
// 006760c0  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 006760c3  e9089f0d00           jmp 0x74ffd0
// auto-matched from its assembly shape

struct P_func_006760c0 { void g(); };
struct S_func_006760c0 {
    char pad[60];
    P_func_006760c0* m_p;
    void f();
};
void S_func_006760c0::f()
{
    m_p->g();
}
