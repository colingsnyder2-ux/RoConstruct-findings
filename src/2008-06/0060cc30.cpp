// roc 2008-06 0060cc30  unit: RBX::BallBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cc30
//
// 0060cc30  8b09                 mov ecx, dword ptr [ecx]
// 0060cc32  e9a9d80400           jmp 0x65a4e0
// auto-matched from its assembly shape

struct P_func_0060cc30 { void g(); };
struct S_func_0060cc30 {
    P_func_0060cc30* m_p;
    void f();
};
void S_func_0060cc30::f()
{
    m_p->g();
}
