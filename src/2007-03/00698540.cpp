// roc 2007-03 00698540  unit: seg_00690000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698540
//
// 00698540  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 00698546  e9c5faffff           jmp 0x698010
// auto-matched from its assembly shape

struct P_func_00698540 { void g(); };
struct S_func_00698540 {
    char pad[444];
    P_func_00698540* m_p;
    void f();
};
void S_func_00698540::f()
{
    m_p->g();
}
