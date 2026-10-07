// roc 2009-06 007b6290  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b6290
//
// 007b6290  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 007b6296  e9b5f9ffff           jmp 0x7b5c50
// auto-matched from its assembly shape

struct P_func_007b6290 { void g(); };
struct S_func_007b6290 {
    char pad[444];
    P_func_007b6290* m_p;
    void f();
};
void S_func_007b6290::f()
{
    m_p->g();
}
