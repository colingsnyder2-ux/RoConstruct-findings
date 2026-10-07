// roc 2010-06 00847620  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00847620
//
// 00847620  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 00847626  e9b5f9ffff           jmp 0x846fe0
// auto-matched from its assembly shape

struct P_func_00847620 { void g(); };
struct S_func_00847620 {
    char pad[444];
    P_func_00847620* m_p;
    void f();
};
void S_func_00847620::f()
{
    m_p->g();
}
