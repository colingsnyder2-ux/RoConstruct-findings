// roc 2010-06 007148c0  unit: RBX::BlockBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007148c0
//
// 007148c0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007148c3  e968fdffff           jmp 0x714630
// auto-matched from its assembly shape

struct P_func_007148c0 { void g(); };
struct S_func_007148c0 {
    char pad[36];
    P_func_007148c0* m_p;
    void f();
};
void S_func_007148c0::f()
{
    m_p->g();
}
