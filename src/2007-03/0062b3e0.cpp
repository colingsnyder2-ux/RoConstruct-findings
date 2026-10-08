// roc 2007-03 0062b3e0  unit: seg_00620000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062b3e0
//
// 0062b3e0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0062b3e6  e9655e0000           jmp 0x631250
// auto-matched from its assembly shape

struct P_func_0062b3e0 { void g(); };
struct S_func_0062b3e0 {
    char pad[188];
    P_func_0062b3e0* m_p;
    void f();
};
void S_func_0062b3e0::f()
{
    m_p->g();
}
