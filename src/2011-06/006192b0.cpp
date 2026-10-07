// roc 2011-06 006192b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006192b0
//
// 006192b0  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 006192b6  e9a5a11500           jmp 0x773460
// auto-matched from its assembly shape

struct P_func_006192b0 { void g(); };
struct S_func_006192b0 {
    char pad[516];
    P_func_006192b0* m_p;
    void f();
};
void S_func_006192b0::f()
{
    m_p->g();
}
