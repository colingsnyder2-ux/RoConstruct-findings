// roc 2008-06 00714150  unit: CXTPPropertyGridView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714150
//
// 00714150  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00714156  e9f563feff           jmp 0x6fa550
// auto-matched from its assembly shape

struct P_func_00714150 { void g(); };
struct S_func_00714150 {
    char pad[176];
    P_func_00714150* m_p;
    void f();
};
void S_func_00714150::f()
{
    m_p->g();
}
