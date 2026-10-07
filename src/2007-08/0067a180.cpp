// roc 2007-08 0067a180  unit: CXTPPopupBar::CControlExpandButton  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a180
//
// 0067a180  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0067a186  e975f7ffff           jmp 0x679900
// auto-matched from its assembly shape

struct P_func_0067a180 { void g(); };
struct S_func_0067a180 {
    char pad[252];
    P_func_0067a180* m_p;
    void f();
};
void S_func_0067a180::f()
{
    m_p->g();
}
