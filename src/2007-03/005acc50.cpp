// roc 2007-03 005acc50  unit: seg_005a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acc50
//
// 005acc50  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 005acc53  e9f8ac0300           jmp 0x5e7950
// auto-matched from its assembly shape

struct P_func_005acc50 { void g(); };
struct S_func_005acc50 {
    char pad[48];
    P_func_005acc50* m_p;
    void f();
};
void S_func_005acc50::f()
{
    m_p->g();
}
