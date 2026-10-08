// roc 2007-08 005ff4f0  unit: RBX::BallBallContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff4f0
//
// 005ff4f0  8b09                 mov ecx, dword ptr [ecx]
// 005ff4f2  e909f4fdff           jmp 0x5de900
// auto-matched from its assembly shape

struct P_func_005ff4f0 { void g(); };
struct S_func_005ff4f0 {
    P_func_005ff4f0* m_p;
    void f();
};
void S_func_005ff4f0::f()
{
    m_p->g();
}
