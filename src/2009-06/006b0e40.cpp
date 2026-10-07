// roc 2009-06 006b0e40  unit: RBX::BallBallContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0e40
//
// 006b0e40  8b09                 mov ecx, dword ptr [ecx]
// 006b0e42  e9e9c90200           jmp 0x6dd830
// auto-matched from its assembly shape

struct P_func_006b0e40 { void g(); };
struct S_func_006b0e40 {
    P_func_006b0e40* m_p;
    void f();
};
void S_func_006b0e40::f()
{
    m_p->g();
}
