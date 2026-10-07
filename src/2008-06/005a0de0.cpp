// roc 2008-06 005a0de0  unit: RBX::RootInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0de0
//
// 005a0de0  8b89e4020000         mov ecx, dword ptr [ecx + 0x2e4]
// 005a0de6  e9959a0400           jmp 0x5ea880
// auto-matched from its assembly shape

struct P_func_005a0de0 { void g(); };
struct S_func_005a0de0 {
    char pad[740];
    P_func_005a0de0* m_p;
    void f();
};
void S_func_005a0de0::f()
{
    m_p->g();
}
