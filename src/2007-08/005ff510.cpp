// roc 2007-08 005ff510  unit: RBX::BallBallContact  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff510
//
// 005ff510  8b09                 mov ecx, dword ptr [ecx]
// 005ff512  e9f9f7fdff           jmp 0x5ded10
// auto-matched from its assembly shape

struct P_func_005ff510 { void g(); };
struct S_func_005ff510 {
    P_func_005ff510* m_p;
    void f();
};
void S_func_005ff510::f()
{
    m_p->g();
}
