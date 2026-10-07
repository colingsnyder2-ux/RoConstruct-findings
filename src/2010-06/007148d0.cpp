// roc 2010-06 007148d0  unit: RBX::BlockBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007148d0
//
// 007148d0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007148d3  e928feffff           jmp 0x714700
// auto-matched from its assembly shape

struct P_func_007148d0 { void g(); };
struct S_func_007148d0 {
    char pad[36];
    P_func_007148d0* m_p;
    void f();
};
void S_func_007148d0::f()
{
    m_p->g();
}
