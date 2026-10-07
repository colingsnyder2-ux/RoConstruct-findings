// roc 2008-06 005e9250  unit: RBX::PhysicsService  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9250
//
// 005e9250  8b8988000000         mov ecx, dword ptr [ecx + 0x88]
// 005e9256  e905120600           jmp 0x64a460
// auto-matched from its assembly shape

struct P_func_005e9250 { void g(); };
struct S_func_005e9250 {
    char pad[136];
    P_func_005e9250* m_p;
    void f();
};
void S_func_005e9250::f()
{
    m_p->g();
}
