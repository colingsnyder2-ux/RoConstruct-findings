// roc 2009-06 0065c550  unit: RBX::PartInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065c550
//
// 0065c550  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 0065c556  e9b5490100           jmp 0x670f10
// auto-matched from its assembly shape

struct P_func_0065c550 { void g(); };
struct S_func_0065c550 {
    char pad[280];
    P_func_0065c550* m_p;
    void f();
};
void S_func_0065c550::f()
{
    m_p->g();
}
