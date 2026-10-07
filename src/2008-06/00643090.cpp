// roc 2008-06 00643090  unit: RBX::ScriptMouseCommand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643090
//
// 00643090  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00643093  e9c8b50000           jmp 0x64e660
// auto-matched from its assembly shape

struct P_func_00643090 { void g(); };
struct S_func_00643090 {
    char pad[28];
    P_func_00643090* m_p;
    void f();
};
void S_func_00643090::f()
{
    m_p->g();
}
