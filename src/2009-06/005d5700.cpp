// roc 2009-06 005d5700  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d5700
//
// 005d5700  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 005d5706  e945721300           jmp 0x70c950
// auto-matched from its assembly shape

struct P_func_005d5700 { void g(); };
struct S_func_005d5700 {
    char pad[140];
    P_func_005d5700* m_p;
    void f();
};
void S_func_005d5700::f()
{
    m_p->g();
}
