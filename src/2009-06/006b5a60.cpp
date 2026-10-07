// roc 2009-06 006b5a60  unit: RBX::ScriptMouseCommand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5a60
//
// 006b5a60  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006b5a63  e9b8f5feff           jmp 0x6a5020
// auto-matched from its assembly shape

struct P_func_006b5a60 { void g(); };
struct S_func_006b5a60 {
    char pad[28];
    P_func_006b5a60* m_p;
    void f();
};
void S_func_006b5a60::f()
{
    m_p->g();
}
