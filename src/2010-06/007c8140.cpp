// roc 2010-06 007c8140  unit: CXTPCommandBars  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8140
//
// 007c8140  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 007c8146  e9c53ffeff           jmp 0x7ac110
// auto-matched from its assembly shape

struct P_func_007c8140 { void g(); };
struct S_func_007c8140 {
    char pad[188];
    P_func_007c8140* m_p;
    void f();
};
void S_func_007c8140::f()
{
    m_p->g();
}
