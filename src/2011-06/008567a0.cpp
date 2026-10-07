// roc 2011-06 008567a0  unit: CXTPPopupBar::CControlExpandButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008567a0
//
// 008567a0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008567a6  e925f7ffff           jmp 0x855ed0
// auto-matched from its assembly shape

struct P_func_008567a0 { void g(); };
struct S_func_008567a0 {
    char pad[256];
    P_func_008567a0* m_p;
    void f();
};
void S_func_008567a0::f()
{
    m_p->g();
}
