// roc 2008-06 005a0e30  unit: RBX::RootInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0e30
//
// 005a0e30  8b89e4020000         mov ecx, dword ptr [ecx + 0x2e4]
// 005a0e36  e9e5860400           jmp 0x5e9520
// auto-matched from its assembly shape

struct P_func_005a0e30 { void g(); };
struct S_func_005a0e30 {
    char pad[740];
    P_func_005a0e30* m_p;
    void f();
};
void S_func_005a0e30::f()
{
    m_p->g();
}
