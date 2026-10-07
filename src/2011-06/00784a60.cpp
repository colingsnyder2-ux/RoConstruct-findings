// roc 2011-06 00784a60  unit: RBX::ScriptMouseCommand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00784a60
//
// 00784a60  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00784a63  e988d7faff           jmp 0x7321f0
// auto-matched from its assembly shape

struct P_func_00784a60 { void g(); };
struct S_func_00784a60 {
    char pad[32];
    P_func_00784a60* m_p;
    void f();
};
void S_func_00784a60::f()
{
    m_p->g();
}
