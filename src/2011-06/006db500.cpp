// roc 2011-06 006db500  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db500
//
// 006db500  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 006db506  e9c5340700           jmp 0x74e9d0
// auto-matched from its assembly shape

struct P_func_006db500 { void g(); };
struct S_func_006db500 {
    char pad[180];
    P_func_006db500* m_p;
    void f();
};
void S_func_006db500::f()
{
    m_p->g();
}
