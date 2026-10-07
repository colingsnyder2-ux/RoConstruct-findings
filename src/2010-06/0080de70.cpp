// roc 2010-06 0080de70  unit: CSelectionCaption  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080de70
//
// 0080de70  8b4908               mov ecx, dword ptr [ecx + 8]
// 0080de73  e92aa5f9ff           jmp 0x7a83a2
// auto-matched from its assembly shape

struct P_func_0080de70 { void g(); };
struct S_func_0080de70 {
    char pad[8];
    P_func_0080de70* m_p;
    void f();
};
void S_func_0080de70::f()
{
    m_p->g();
}
