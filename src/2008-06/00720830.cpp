// roc 2008-06 00720830  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720830
//
// 00720830  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 00720836  e9b5f9ffff           jmp 0x7201f0
// auto-matched from its assembly shape

struct P_func_00720830 { void g(); };
struct S_func_00720830 {
    char pad[444];
    P_func_00720830* m_p;
    void f();
};
void S_func_00720830::f()
{
    m_p->g();
}
