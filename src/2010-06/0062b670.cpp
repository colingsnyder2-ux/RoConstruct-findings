// roc 2010-06 0062b670  unit: RBX::ContentProvider  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062b670
//
// 0062b670  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0062b673  e9f8a11100           jmp 0x745870
// auto-matched from its assembly shape

struct P_func_0062b670 { void g(); };
struct S_func_0062b670 {
    char pad[32];
    P_func_0062b670* m_p;
    void f();
};
void S_func_0062b670::f()
{
    m_p->g();
}
