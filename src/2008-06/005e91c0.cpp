// roc 2008-06 005e91c0  unit: RBX::PhysicsService  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e91c0
//
// 005e91c0  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 005e91c6  e9853a0200           jmp 0x60cc50
// auto-matched from its assembly shape

struct P_func_005e91c0 { void g(); };
struct S_func_005e91c0 {
    char pad[132];
    P_func_005e91c0* m_p;
    void f();
};
void S_func_005e91c0::f()
{
    m_p->g();
}
