// roc 2007-08 005ff500  unit: RBX::BallBallContact  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff500
//
// 005ff500  8b09                 mov ecx, dword ptr [ecx]
// 005ff502  e9d9f7fdff           jmp 0x5dece0
// auto-matched from its assembly shape

struct P_func_005ff500 { void g(); };
struct S_func_005ff500 {
    P_func_005ff500* m_p;
    void f();
};
void S_func_005ff500::f()
{
    m_p->g();
}
