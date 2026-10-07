// roc 2010-06 008a0d50  unit: CXTPDialogBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0d50
//
// 008a0d50  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008a0d53  e918e6ffff           jmp 0x89f370
// auto-matched from its assembly shape

struct P_func_008a0d50 { void g(); };
struct S_func_008a0d50 {
    char pad[52];
    P_func_008a0d50* m_p;
    void f();
};
void S_func_008a0d50::f()
{
    m_p->g();
}
