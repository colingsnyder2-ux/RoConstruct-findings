// roc 2008-06 0070d650  unit: CSelectionCaption  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d650
//
// 0070d650  8b4908               mov ecx, dword ptr [ecx + 8]
// 0070d653  e96a39f9ff           jmp 0x6a0fc2
// auto-matched from its assembly shape

struct P_func_0070d650 { void g(); };
struct S_func_0070d650 {
    char pad[8];
    P_func_0070d650* m_p;
    void f();
};
void S_func_0070d650::f()
{
    m_p->g();
}
