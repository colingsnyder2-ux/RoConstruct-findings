// roc 2011-06 006db510  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db510
//
// 006db510  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006db516  e935630d00           jmp 0x7b1850
// auto-matched from its assembly shape

struct P_func_006db510 { void g(); };
struct S_func_006db510 {
    char pad[188];
    P_func_006db510* m_p;
    void f();
};
void S_func_006db510::f()
{
    m_p->g();
}
