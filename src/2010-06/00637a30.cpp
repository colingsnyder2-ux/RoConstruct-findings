// roc 2010-06 00637a30  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00637a30
//
// 00637a30  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 00637a36  e9e5ff0300           jmp 0x677a20
// auto-matched from its assembly shape

struct P_func_00637a30 { void g(); };
struct S_func_00637a30 {
    char pad[360];
    P_func_00637a30* m_p;
    void f();
};
void S_func_00637a30::f()
{
    m_p->g();
}
