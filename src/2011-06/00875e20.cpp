// roc 2011-06 00875e20  unit: CXTPPropertyGridView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875e20
//
// 00875e20  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00875e26  e91535ffff           jmp 0x869340
// auto-matched from its assembly shape

struct P_func_00875e20 { void g(); };
struct S_func_00875e20 {
    char pad[176];
    P_func_00875e20* m_p;
    void f();
};
void S_func_00875e20::f()
{
    m_p->g();
}
