// roc 2009-06 00729380  unit: CXTPCommandBars  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729380
//
// 00729380  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00729386  e96584ffff           jmp 0x7217f0
// auto-matched from its assembly shape

struct P_func_00729380 { void g(); };
struct S_func_00729380 {
    char pad[188];
    P_func_00729380* m_p;
    void f();
};
void S_func_00729380::f()
{
    m_p->g();
}
