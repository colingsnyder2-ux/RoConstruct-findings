// roc 2011-06 008a47d0  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a47d0
//
// 008a47d0  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 008a47d6  e9a5f9ffff           jmp 0x8a4180
// auto-matched from its assembly shape

struct P_func_008a47d0 { void g(); };
struct S_func_008a47d0 {
    char pad[444];
    P_func_008a47d0* m_p;
    void f();
};
void S_func_008a47d0::f()
{
    m_p->g();
}
