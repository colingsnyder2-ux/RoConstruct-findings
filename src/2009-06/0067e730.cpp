// roc 2009-06 0067e730  unit: RBX::Mechanism  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e730
//
// 0067e730  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0067e736  e945a50500           jmp 0x6d8c80
// auto-matched from its assembly shape

struct P_func_0067e730 { void g(); };
struct S_func_0067e730 {
    char pad[184];
    P_func_0067e730* m_p;
    void f();
};
void S_func_0067e730::f()
{
    m_p->g();
}
