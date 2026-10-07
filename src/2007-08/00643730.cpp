// roc 2007-08 00643730  unit: CXTPCommandBar::CCommandBarCmdUI  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00643730
//
// 00643730  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00643733  e9c86fffff           jmp 0x63a700
// auto-matched from its assembly shape

struct P_func_00643730 { void g(); };
struct S_func_00643730 {
    char pad[40];
    P_func_00643730* m_p;
    void f();
};
void S_func_00643730::f()
{
    m_p->g();
}
