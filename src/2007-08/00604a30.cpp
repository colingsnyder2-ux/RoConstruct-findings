// roc 2007-08 00604a30  unit: RBX::SleepStage  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604a30
//
// 00604a30  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604a33  e9c8330200           jmp 0x627e00
// auto-matched from its assembly shape

struct P_func_00604a30 { void g(); };
struct S_func_00604a30 {
    char pad[8];
    P_func_00604a30* m_p;
    void f();
};
void S_func_00604a30::f()
{
    m_p->g();
}
