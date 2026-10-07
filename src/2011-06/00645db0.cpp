// roc 2011-06 00645db0  unit: RBX::VPlayerGui::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645db0
//
// 00645db0  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 00645db6  e9c54bf4ff           jmp 0x58a980
// auto-matched from its assembly shape

struct P_func_00645db0 { void g(); };
struct S_func_00645db0 {
    char pad[152];
    P_func_00645db0* m_p;
    void f();
};
void S_func_00645db0::f()
{
    m_p->g();
}
