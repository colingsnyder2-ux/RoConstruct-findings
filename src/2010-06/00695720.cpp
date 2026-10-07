// roc 2010-06 00695720  unit: RBX::Motor6D  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695720
//
// 00695720  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 00695726  e995c50b00           jmp 0x751cc0
// auto-matched from its assembly shape

struct P_func_00695720 { void g(); };
struct S_func_00695720 {
    char pad[180];
    P_func_00695720* m_p;
    void f();
};
void S_func_00695720::f()
{
    m_p->g();
}
