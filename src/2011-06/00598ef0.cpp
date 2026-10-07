// roc 2011-06 00598ef0  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00598ef0
//
// 00598ef0  8b8994000000         mov ecx, dword ptr [ecx + 0x94]
// 00598ef6  e9f54b2600           jmp 0x7fdaf0
// auto-matched from its assembly shape

struct P_func_00598ef0 { void g(); };
struct S_func_00598ef0 {
    char pad[148];
    P_func_00598ef0* m_p;
    void f();
};
void S_func_00598ef0::f()
{
    m_p->g();
}
