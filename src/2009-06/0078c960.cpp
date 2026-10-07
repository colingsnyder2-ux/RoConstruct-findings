// roc 2009-06 0078c960  unit: CXTPPropertyGridView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078c960
//
// 0078c960  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0078c966  e97565feff           jmp 0x772ee0
// auto-matched from its assembly shape

struct P_func_0078c960 { void g(); };
struct S_func_0078c960 {
    char pad[176];
    P_func_0078c960* m_p;
    void f();
};
void S_func_0078c960::f()
{
    m_p->g();
}
