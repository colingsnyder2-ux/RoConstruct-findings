// roc 2010-06 00713fc0  unit: RBX::BlockBlockContact  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713fc0
//
// 00713fc0  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00713fc3  e938feffff           jmp 0x713e00
// auto-matched from its assembly shape

struct P_func_00713fc0 { void g(); };
struct S_func_00713fc0 {
    char pad[36];
    P_func_00713fc0* m_p;
    void f();
};
void S_func_00713fc0::f()
{
    m_p->g();
}
