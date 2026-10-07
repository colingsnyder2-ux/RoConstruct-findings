// roc 2007-08 006a80a0  unit: CXTPRibbonBar  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a80a0
//
// 006a80a0  8b8960020000         mov ecx, dword ptr [ecx + 0x260]
// 006a80a6  e90536fcff           jmp 0x66b6b0
// auto-matched from its assembly shape

struct P_func_006a80a0 { void g(); };
struct S_func_006a80a0 {
    char pad[608];
    P_func_006a80a0* m_p;
    void f();
};
void S_func_006a80a0::f()
{
    m_p->g();
}
