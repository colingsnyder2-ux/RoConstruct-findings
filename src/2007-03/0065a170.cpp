// roc 2007-03 0065a170  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a170
//
// 0065a170  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0065a176  e9f507fdff           jmp 0x62a970
// auto-matched from its assembly shape

struct P_func_0065a170 { void g(); };
struct S_func_0065a170 {
    char pad[228];
    P_func_0065a170* m_p;
    void f();
};
void S_func_0065a170::f()
{
    m_p->g();
}
