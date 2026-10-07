// roc 2010-06 007148e0  unit: RBX::BlockBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007148e0
//
// 007148e0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007148e3  e968ffffff           jmp 0x714850
// auto-matched from its assembly shape

struct P_func_007148e0 { void g(); };
struct S_func_007148e0 {
    char pad[36];
    P_func_007148e0* m_p;
    void f();
};
void S_func_007148e0::f()
{
    m_p->g();
}
