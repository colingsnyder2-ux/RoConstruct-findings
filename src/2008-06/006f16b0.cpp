// roc 2008-06 006f16b0  unit: CXTPPopupBar::CControlExpandButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f16b0
//
// 006f16b0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006f16b6  e925f7ffff           jmp 0x6f0de0
// auto-matched from its assembly shape

struct P_func_006f16b0 { void g(); };
struct S_func_006f16b0 {
    char pad[256];
    P_func_006f16b0* m_p;
    void f();
};
void S_func_006f16b0::f()
{
    m_p->g();
}
