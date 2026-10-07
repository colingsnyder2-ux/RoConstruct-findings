// roc 2007-08 006713a0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006713a0
//
// 006713a0  8b09                 mov ecx, dword ptr [ecx]
// 006713a2  e9e9ffffff           jmp 0x671390
// auto-matched from its assembly shape

struct P_func_006713a0 { void g(); };
struct S_func_006713a0 {
    P_func_006713a0* m_p;
    void f();
};
void S_func_006713a0::f()
{
    m_p->g();
}
