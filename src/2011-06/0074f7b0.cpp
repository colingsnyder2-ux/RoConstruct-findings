// roc 2011-06 0074f7b0  unit: RBX::BallBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074f7b0
//
// 0074f7b0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0074f7b3  e948fdffff           jmp 0x74f500
// auto-matched from its assembly shape

struct P_func_0074f7b0 { void g(); };
struct S_func_0074f7b0 {
    char pad[36];
    P_func_0074f7b0* m_p;
    void f();
};
void S_func_0074f7b0::f()
{
    m_p->g();
}
