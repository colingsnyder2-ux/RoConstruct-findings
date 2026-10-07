// roc 2007-08 0069ab40  unit: CXTPPropertyGridView  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ab40
//
// 0069ab40  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0069ab46  e9757ffeff           jmp 0x682ac0
// auto-matched from its assembly shape

struct P_func_0069ab40 { void g(); };
struct S_func_0069ab40 {
    char pad[176];
    P_func_0069ab40* m_p;
    void f();
};
void S_func_0069ab40::f()
{
    m_p->g();
}
