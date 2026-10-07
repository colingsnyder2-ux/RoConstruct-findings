// roc 2008-06 0060cc40  unit: RBX::BallBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cc40
//
// 0060cc40  8b09                 mov ecx, dword ptr [ecx]
// 0060cc42  e979de0400           jmp 0x65aac0
// auto-matched from its assembly shape

struct P_func_0060cc40 { void g(); };
struct S_func_0060cc40 {
    P_func_0060cc40* m_p;
    void f();
};
void S_func_0060cc40::f()
{
    m_p->g();
}
