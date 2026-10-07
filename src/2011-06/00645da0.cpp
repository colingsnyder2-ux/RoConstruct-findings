// roc 2011-06 00645da0  unit: RBX::VPlayerGui::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645da0
//
// 00645da0  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 00645da6  e9354bf4ff           jmp 0x58a8e0
// auto-matched from its assembly shape

struct P_func_00645da0 { void g(); };
struct S_func_00645da0 {
    char pad[152];
    P_func_00645da0* m_p;
    void f();
};
void S_func_00645da0::f()
{
    m_p->g();
}
