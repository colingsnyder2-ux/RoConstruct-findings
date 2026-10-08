// roc 2007-08 006713b0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006713b0
//
// 006713b0  8b09                 mov ecx, dword ptr [ecx]
// 006713b2  e9198ee5ff           jmp 0x4ca1d0
// auto-matched from its assembly shape

struct P_func_006713b0 { void g(); };
struct S_func_006713b0 {
    P_func_006713b0* m_p;
    void f();
};
void S_func_006713b0::f()
{
    m_p->g();
}
