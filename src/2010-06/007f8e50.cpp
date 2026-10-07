// roc 2010-06 007f8e50  unit: CXTPPopupBar::CControlExpandButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f8e50
//
// 007f8e50  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f8e56  e925f7ffff           jmp 0x7f8580
// auto-matched from its assembly shape

struct P_func_007f8e50 { void g(); };
struct S_func_007f8e50 {
    char pad[256];
    P_func_007f8e50* m_p;
    void f();
};
void S_func_007f8e50::f()
{
    m_p->g();
}
