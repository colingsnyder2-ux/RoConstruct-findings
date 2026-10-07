// roc 2010-06 00699af0  unit: RBX::PolyContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699af0
//
// 00699af0  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 00699af6  e9e5ad0700           jmp 0x7148e0
// auto-matched from its assembly shape

struct P_func_00699af0 { void g(); };
struct S_func_00699af0 {
    char pad[208];
    P_func_00699af0* m_p;
    void f();
};
void S_func_00699af0::f()
{
    m_p->g();
}
