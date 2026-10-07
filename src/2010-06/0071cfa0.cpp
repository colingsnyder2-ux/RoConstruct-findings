// roc 2010-06 0071cfa0  unit: RBX::ScriptMouseCommand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071cfa0
//
// 0071cfa0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0071cfa3  e96854fdff           jmp 0x6f2410
// auto-matched from its assembly shape

struct P_func_0071cfa0 { void g(); };
struct S_func_0071cfa0 {
    char pad[28];
    P_func_0071cfa0* m_p;
    void f();
};
void S_func_0071cfa0::f()
{
    m_p->g();
}
