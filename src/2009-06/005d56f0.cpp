// roc 2009-06 005d56f0  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d56f0
//
// 005d56f0  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 005d56f6  e965721300           jmp 0x70c960
// auto-matched from its assembly shape

struct P_func_005d56f0 { void g(); };
struct S_func_005d56f0 {
    char pad[140];
    P_func_005d56f0* m_p;
    void f();
};
void S_func_005d56f0::f()
{
    m_p->g();
}
