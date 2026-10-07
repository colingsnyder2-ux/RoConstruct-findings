// roc 2011-06 00598f00  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00598f00
//
// 00598f00  8b8994000000         mov ecx, dword ptr [ecx + 0x94]
// 00598f06  e9d54b2600           jmp 0x7fdae0
// auto-matched from its assembly shape

struct P_func_00598f00 { void g(); };
struct S_func_00598f00 {
    char pad[148];
    P_func_00598f00* m_p;
    void f();
};
void S_func_00598f00::f()
{
    m_p->g();
}
