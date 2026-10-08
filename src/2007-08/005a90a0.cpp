// roc 2007-08 005a90a0  unit: RBX::VHumanoid::?$SignalDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a90a0
//
// 005a90a0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a90a3  e9b89f0500           jmp 0x603060
// auto-matched from its assembly shape

struct P_func_005a90a0 { void g(); };
struct S_func_005a90a0 {
    char pad[52];
    P_func_005a90a0* m_p;
    void f();
};
void S_func_005a90a0::f()
{
    m_p->g();
}
