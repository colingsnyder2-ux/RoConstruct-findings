// roc 2007-08 00601530  unit: RBX::ScriptMouseCommand  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00601530
//
// 00601530  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00601533  e9f89d0100           jmp 0x61b330
// auto-matched from its assembly shape

struct P_func_00601530 { void g(); };
struct S_func_00601530 {
    char pad[32];
    P_func_00601530* m_p;
    void f();
};
void S_func_00601530::f()
{
    m_p->g();
}
