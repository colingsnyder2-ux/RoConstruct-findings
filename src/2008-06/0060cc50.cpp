// roc 2008-06 0060cc50  unit: RBX::BallBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cc50
//
// 0060cc50  8b09                 mov ecx, dword ptr [ecx]
// 0060cc52  e979df0400           jmp 0x65abd0
// auto-matched from its assembly shape

struct P_func_0060cc50 { void g(); };
struct S_func_0060cc50 {
    P_func_0060cc50* m_p;
    void f();
};
void S_func_0060cc50::f()
{
    m_p->g();
}
