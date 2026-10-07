// roc 2007-08 005ff4b0  unit: RBX::BallBallContact  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff4b0
//
// 005ff4b0  8b09                 mov ecx, dword ptr [ecx]
// 005ff4b2  e90902feff           jmp 0x5df6c0
// auto-matched from its assembly shape

struct P_func_005ff4b0 { void g(); };
struct S_func_005ff4b0 {
    P_func_005ff4b0* m_p;
    void f();
};
void S_func_005ff4b0::f()
{
    m_p->g();
}
