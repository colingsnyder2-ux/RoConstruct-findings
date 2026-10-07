// roc 2008-06 0060cbf0  unit: RBX::BallBlockContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cbf0
//
// 0060cbf0  8b09                 mov ecx, dword ptr [ecx]
// 0060cbf2  e91908e7ff           jmp 0x47d410
// auto-matched from its assembly shape

struct P_func_0060cbf0 { void g(); };
struct S_func_0060cbf0 {
    P_func_0060cbf0* m_p;
    void f();
};
void S_func_0060cbf0::f()
{
    m_p->g();
}
