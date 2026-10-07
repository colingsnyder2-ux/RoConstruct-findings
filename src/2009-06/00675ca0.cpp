// roc 2009-06 00675ca0  unit: RBX::TimerService  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675ca0
//
// 00675ca0  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 00675ca3  e9c8060600           jmp 0x6d6370
// auto-matched from its assembly shape

struct P_func_00675ca0 { void g(); };
struct S_func_00675ca0 {
    char pad[60];
    P_func_00675ca0* m_p;
    void f();
};
void S_func_00675ca0::f()
{
    m_p->g();
}
