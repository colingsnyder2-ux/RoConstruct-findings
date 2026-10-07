// roc 2008-06 005e9230  unit: RBX::PhysicsService  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9230
//
// 005e9230  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 005e9236  e9a5460200           jmp 0x60d8e0
// auto-matched from its assembly shape

struct P_func_005e9230 { void g(); };
struct S_func_005e9230 {
    char pad[132];
    P_func_005e9230* m_p;
    void f();
};
void S_func_005e9230::f()
{
    m_p->g();
}
