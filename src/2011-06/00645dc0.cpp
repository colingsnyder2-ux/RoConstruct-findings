// roc 2011-06 00645dc0  unit: RBX::VPlayerGui::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645dc0
//
// 00645dc0  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 00645dc6  e9754af4ff           jmp 0x58a840
// auto-matched from its assembly shape

struct P_func_00645dc0 { void g(); };
struct S_func_00645dc0 {
    char pad[152];
    P_func_00645dc0* m_p;
    void f();
};
void S_func_00645dc0::f()
{
    m_p->g();
}
