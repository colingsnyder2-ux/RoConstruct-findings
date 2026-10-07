// roc 2011-06 0066cae0  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066cae0
//
// 0066cae0  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 0066cae6  e945800300           jmp 0x6a4b30
// auto-matched from its assembly shape

struct P_func_0066cae0 { void g(); };
struct S_func_0066cae0 {
    char pad[360];
    P_func_0066cae0* m_p;
    void f();
};
void S_func_0066cae0::f()
{
    m_p->g();
}
