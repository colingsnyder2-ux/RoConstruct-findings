// roc 2011-06 006db4f0  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db4f0
//
// 006db4f0  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 006db4f6  e9d5420700           jmp 0x74f7d0
// auto-matched from its assembly shape

struct P_func_006db4f0 { void g(); };
struct S_func_006db4f0 {
    char pad[180];
    P_func_006db4f0* m_p;
    void f();
};
void S_func_006db4f0::f()
{
    m_p->g();
}
