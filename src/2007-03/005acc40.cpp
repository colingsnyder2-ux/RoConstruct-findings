// roc 2007-03 005acc40  unit: seg_005a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acc40
//
// 005acc40  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 005acc43  e988a40300           jmp 0x5e70d0
// auto-matched from its assembly shape

struct P_func_005acc40 { void g(); };
struct S_func_005acc40 {
    char pad[48];
    P_func_005acc40* m_p;
    void f();
};
void S_func_005acc40::f()
{
    m_p->g();
}
