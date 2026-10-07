// roc 2011-06 0066cb40  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066cb40
//
// 0066cb40  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 0066cb46  e9e5650300           jmp 0x6a3130
// auto-matched from its assembly shape

struct P_func_0066cb40 { void g(); };
struct S_func_0066cb40 {
    char pad[360];
    P_func_0066cb40* m_p;
    void f();
};
void S_func_0066cb40::f()
{
    m_p->g();
}
