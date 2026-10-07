// roc 2010-06 0053c780  unit: RBX::AdornG3D  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053c780
//
// 0053c780  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0053c783  e9d855f5ff           jmp 0x491d60
// auto-matched from its assembly shape

struct P_func_0053c780 { void g(); };
struct S_func_0053c780 {
    char pad[12];
    P_func_0053c780* m_p;
    void f();
};
void S_func_0053c780::f()
{
    m_p->g();
}
