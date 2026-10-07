// roc 2011-06 006db520  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db520
//
// 006db520  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006db526  e965630d00           jmp 0x7b1890
// auto-matched from its assembly shape

struct P_func_006db520 { void g(); };
struct S_func_006db520 {
    char pad[188];
    P_func_006db520* m_p;
    void f();
};
void S_func_006db520::f()
{
    m_p->g();
}
