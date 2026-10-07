// roc 2007-08 005ff520  unit: RBX::BallBallContact  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff520
//
// 005ff520  8b09                 mov ecx, dword ptr [ecx]
// 005ff522  e9f9f7fdff           jmp 0x5ded20
// auto-matched from its assembly shape

struct P_func_005ff520 { void g(); };
struct S_func_005ff520 {
    P_func_005ff520* m_p;
    void f();
};
void S_func_005ff520::f()
{
    m_p->g();
}
