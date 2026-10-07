// roc 2009-06 00670f10  unit: RBX::Primitive  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00670f10
//
// 00670f10  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00670f16  e9a5faffff           jmp 0x6709c0
// auto-matched from its assembly shape

struct P_func_00670f10 { void g(); };
struct S_func_00670f10 {
    char pad[228];
    P_func_00670f10* m_p;
    void f();
};
void S_func_00670f10::f()
{
    m_p->g();
}
