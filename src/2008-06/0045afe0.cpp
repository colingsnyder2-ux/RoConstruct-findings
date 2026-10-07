// roc 2008-06 0045afe0  unit: CRobloxWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045afe0
//
// 0045afe0  8b09                 mov ecx, dword ptr [ecx]
// 0045afe2  e9096e0b00           jmp 0x511df0
// auto-matched from its assembly shape

struct P_func_0045afe0 { void g(); };
struct S_func_0045afe0 {
    P_func_0045afe0* m_p;
    void f();
};
void S_func_0045afe0::f()
{
    m_p->g();
}
