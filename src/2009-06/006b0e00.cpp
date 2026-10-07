// roc 2009-06 006b0e00  unit: RBX::BallBallContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0e00
//
// 006b0e00  8b09                 mov ecx, dword ptr [ecx]
// 006b0e02  e9d93bfcff           jmp 0x6749e0
// auto-matched from its assembly shape

struct P_func_006b0e00 { void g(); };
struct S_func_006b0e00 {
    P_func_006b0e00* m_p;
    void f();
};
void S_func_006b0e00::f()
{
    m_p->g();
}
