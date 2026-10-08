// roc 2007-08 005a9090  unit: RBX::VHumanoid::?$SignalDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9090
//
// 005a9090  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 005a9093  e908700500           jmp 0x6000a0
// auto-matched from its assembly shape

struct P_func_005a9090 { void g(); };
struct S_func_005a9090 {
    char pad[48];
    P_func_005a9090* m_p;
    void f();
};
void S_func_005a9090::f()
{
    m_p->g();
}
