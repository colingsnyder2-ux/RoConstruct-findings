// roc 2011-06 007a3de0  unit: RBX::PrismPoly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a3de0
//
// 007a3de0  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 007a3de3  e908350400           jmp 0x7e72f0
// auto-matched from its assembly shape

struct P_func_007a3de0 { void g(); };
struct S_func_007a3de0 {
    char pad[20];
    P_func_007a3de0* m_p;
    void f();
};
void S_func_007a3de0::f()
{
    m_p->g();
}
