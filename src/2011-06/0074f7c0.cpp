// roc 2011-06 0074f7c0  unit: RBX::BallBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074f7c0
//
// 0074f7c0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0074f7c3  e908feffff           jmp 0x74f5d0
// auto-matched from its assembly shape

struct P_func_0074f7c0 { void g(); };
struct S_func_0074f7c0 {
    char pad[36];
    P_func_0074f7c0* m_p;
    void f();
};
void S_func_0074f7c0::f()
{
    m_p->g();
}
