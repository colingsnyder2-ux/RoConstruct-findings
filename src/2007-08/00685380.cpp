// roc 2007-08 00685380  unit: CXTPPropExchangeArchive  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00685380
//
// 00685380  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00685383  e924b3faff           jmp 0x6306ac
// auto-matched from its assembly shape

struct P_func_00685380 { void g(); };
struct S_func_00685380 {
    char pad[64];
    P_func_00685380* m_p;
    void f();
};
void S_func_00685380::f()
{
    m_p->g();
}
