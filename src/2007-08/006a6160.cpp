// roc 2007-08 006a6160  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6160
//
// 006a6160  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 006a6166  e905faffff           jmp 0x6a5b70
// auto-matched from its assembly shape

struct P_func_006a6160 { void g(); };
struct S_func_006a6160 {
    char pad[444];
    P_func_006a6160* m_p;
    void f();
};
void S_func_006a6160::f()
{
    m_p->g();
}
