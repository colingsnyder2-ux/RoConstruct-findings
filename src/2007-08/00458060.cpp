// roc 2007-08 00458060  unit: CRobloxWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458060
//
// 00458060  8b09                 mov ecx, dword ptr [ecx]
// 00458062  e969020b00           jmp 0x5082d0
// auto-matched from its assembly shape

struct P_func_00458060 { void g(); };
struct S_func_00458060 {
    P_func_00458060* m_p;
    void f();
};
void S_func_00458060::f()
{
    m_p->g();
}
