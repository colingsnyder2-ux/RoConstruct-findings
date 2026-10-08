// roc 2007-03 00666980  unit: seg_00660000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666980
//
// 00666980  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00666983  e98e84fbff           jmp 0x61ee16
// auto-matched from its assembly shape

struct P_func_00666980 { void g(); };
struct S_func_00666980 {
    char pad[64];
    P_func_00666980* m_p;
    void f();
};
void S_func_00666980::f()
{
    m_p->g();
}
