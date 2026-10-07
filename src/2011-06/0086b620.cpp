// roc 2011-06 0086b620  unit: CSelectionCaption  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086b620
//
// 0086b620  8b4908               mov ecx, dword ptr [ecx + 8]
// 0086b623  e93ef4f9ff           jmp 0x80aa66
// auto-matched from its assembly shape

struct P_func_0086b620 { void g(); };
struct S_func_0086b620 {
    char pad[8];
    P_func_0086b620* m_p;
    void f();
};
void S_func_0086b620::f()
{
    m_p->g();
}
