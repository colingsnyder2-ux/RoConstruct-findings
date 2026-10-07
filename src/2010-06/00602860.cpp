// roc 2010-06 00602860  unit: RBX::HeartbeatInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602860
//
// 00602860  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 00602866  e9a5870900           jmp 0x69b010
// auto-matched from its assembly shape

struct P_func_00602860 { void g(); };
struct S_func_00602860 {
    char pad[320];
    P_func_00602860* m_p;
    void f();
};
void S_func_00602860::f()
{
    m_p->g();
}
