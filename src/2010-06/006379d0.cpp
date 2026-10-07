// roc 2010-06 006379d0  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006379d0
//
// 006379d0  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 006379d6  e9451a0400           jmp 0x679420
// auto-matched from its assembly shape

struct P_func_006379d0 { void g(); };
struct S_func_006379d0 {
    char pad[360];
    P_func_006379d0* m_p;
    void f();
};
void S_func_006379d0::f()
{
    m_p->g();
}
