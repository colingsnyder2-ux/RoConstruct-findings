// roc 2009-06 006b0e60  unit: RBX::BallBallContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0e60
//
// 006b0e60  8b09                 mov ecx, dword ptr [ecx]
// 006b0e62  e9c9cb0200           jmp 0x6dda30
// auto-matched from its assembly shape

struct P_func_006b0e60 { void g(); };
struct S_func_006b0e60 {
    P_func_006b0e60* m_p;
    void f();
};
void S_func_006b0e60::f()
{
    m_p->g();
}
