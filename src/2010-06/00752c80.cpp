// roc 2010-06 00752c80  unit: RBX::PrismPoly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00752c80
//
// 00752c80  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00752c83  e968450300           jmp 0x7871f0
// auto-matched from its assembly shape

struct P_func_00752c80 { void g(); };
struct S_func_00752c80 {
    char pad[20];
    P_func_00752c80* m_p;
    void f();
};
void S_func_00752c80::f()
{
    m_p->g();
}
