// roc 2008-06 006a28d0  unit: CXTPCommandBars  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a28d0
//
// 006a28d0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006a28d6  e9f5a70000           jmp 0x6ad0d0
// auto-matched from its assembly shape

struct P_func_006a28d0 { void g(); };
struct S_func_006a28d0 {
    char pad[188];
    P_func_006a28d0* m_p;
    void f();
};
void S_func_006a28d0::f()
{
    m_p->g();
}
