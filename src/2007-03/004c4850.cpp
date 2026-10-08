// roc 2007-03 004c4850  unit: seg_004c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4850
//
// 004c4850  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 004c4853  e958e20a00           jmp 0x572ab0
// auto-matched from its assembly shape

struct P_func_004c4850 { void g(); };
struct S_func_004c4850 {
    char pad[96];
    P_func_004c4850* m_p;
    void f();
};
void S_func_004c4850::f()
{
    m_p->g();
}
