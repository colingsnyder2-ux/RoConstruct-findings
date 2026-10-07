// roc 2009-06 00769fc0  unit: CXTPPopupBar::CControlExpandButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00769fc0
//
// 00769fc0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00769fc6  e925f7ffff           jmp 0x7696f0
// auto-matched from its assembly shape

struct P_func_00769fc0 { void g(); };
struct S_func_00769fc0 {
    char pad[256];
    P_func_00769fc0* m_p;
    void f();
};
void S_func_00769fc0::f()
{
    m_p->g();
}
