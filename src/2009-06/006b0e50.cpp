// roc 2009-06 006b0e50  unit: RBX::BallBallContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0e50
//
// 006b0e50  8b09                 mov ecx, dword ptr [ecx]
// 006b0e52  e9a9ca0200           jmp 0x6dd900
// auto-matched from its assembly shape

struct P_func_006b0e50 { void g(); };
struct S_func_006b0e50 {
    P_func_006b0e50* m_p;
    void f();
};
void S_func_006b0e50::f()
{
    m_p->g();
}
