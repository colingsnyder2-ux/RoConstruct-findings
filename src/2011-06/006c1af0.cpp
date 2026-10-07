// roc 2011-06 006c1af0  unit: RBX::ScriptInformationProvider  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c1af0
//
// 006c1af0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006c1af3  e9c87c0d00           jmp 0x7997c0
// auto-matched from its assembly shape

struct P_func_006c1af0 { void g(); };
struct S_func_006c1af0 {
    char pad[12];
    P_func_006c1af0* m_p;
    void f();
};
void S_func_006c1af0::f()
{
    m_p->g();
}
