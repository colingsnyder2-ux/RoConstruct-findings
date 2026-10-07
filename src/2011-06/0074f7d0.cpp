// roc 2011-06 0074f7d0  unit: RBX::BallBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074f7d0
//
// 0074f7d0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0074f7d3  e968ffffff           jmp 0x74f740
// auto-matched from its assembly shape

struct P_func_0074f7d0 { void g(); };
struct S_func_0074f7d0 {
    char pad[36];
    P_func_0074f7d0* m_p;
    void f();
};
void S_func_0074f7d0::f()
{
    m_p->g();
}
