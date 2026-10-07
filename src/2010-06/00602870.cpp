// roc 2010-06 00602870  unit: RBX::HeartbeatInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602870
//
// 00602870  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 00602876  e975750900           jmp 0x699df0
// auto-matched from its assembly shape

struct P_func_00602870 { void g(); };
struct S_func_00602870 {
    char pad[320];
    P_func_00602870* m_p;
    void f();
};
void S_func_00602870::f()
{
    m_p->g();
}
