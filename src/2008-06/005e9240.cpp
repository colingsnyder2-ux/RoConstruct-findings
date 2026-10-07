// roc 2008-06 005e9240  unit: RBX::PhysicsService  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9240
//
// 005e9240  8b8988000000         mov ecx, dword ptr [ecx + 0x88]
// 005e9246  e9d5110600           jmp 0x64a420
// auto-matched from its assembly shape

struct P_func_005e9240 { void g(); };
struct S_func_005e9240 {
    char pad[136];
    P_func_005e9240* m_p;
    void f();
};
void S_func_005e9240::f()
{
    m_p->g();
}
