// roc 2009-06 0075c870  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075c870
//
// 0075c870  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0075c876  e905e5ffff           jmp 0x75ad80
// auto-matched from its assembly shape

struct P_func_0075c870 { void g(); };
struct S_func_0075c870 {
    char pad[252];
    P_func_0075c870* m_p;
    void f();
};
void S_func_0075c870::f()
{
    m_p->g();
}
