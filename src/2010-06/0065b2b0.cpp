// roc 2010-06 0065b2b0  unit: RBX::ScriptInformationProvider  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065b2b0
//
// 0065b2b0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0065b2b3  e9b8a50e00           jmp 0x745870
// auto-matched from its assembly shape

struct P_func_0065b2b0 { void g(); };
struct S_func_0065b2b0 {
    char pad[16];
    P_func_0065b2b0* m_p;
    void f();
};
void S_func_0065b2b0::f()
{
    m_p->g();
}
