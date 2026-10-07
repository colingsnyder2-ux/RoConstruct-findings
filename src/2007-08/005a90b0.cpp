// roc 2007-08 005a90b0  unit: RBX::VHumanoid::?$SignalDesc  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005a90b0
//
// 005a90b0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a90b3  e948a00500           jmp 0x603100
// auto-matched from its assembly shape

struct P_func_005a90b0 { void g(); };
struct S_func_005a90b0 {
    char pad[52];
    P_func_005a90b0* m_p;
    void f();
};
void S_func_005a90b0::f()
{
    m_p->g();
}
