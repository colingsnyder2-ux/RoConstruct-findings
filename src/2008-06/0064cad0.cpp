// roc 2008-06 0064cad0  unit: RBX::HUMAN::Climbing  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cad0
//
// 0064cad0  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064cad3  e938c90100           jmp 0x669410
// auto-matched from its assembly shape

struct P_func_0064cad0 { void g(); };
struct S_func_0064cad0 {
    char pad[8];
    P_func_0064cad0* m_p;
    void f();
};
void S_func_0064cad0::f()
{
    m_p->g();
}
