// from server: 100% by colin
// roc 2007-08 00463110  unit: CSettingsExplorer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00463110
//
// 00463110  56                   push esi
// 00463111  8bf1                 mov esi, ecx
// 00463113  e848bffaff           call 0x40f060
// 00463118  8bc8                 mov ecx, eax
// 0046311a  e87146feff           call 0x447790
// 0046311f  8d8e90010000         lea ecx, [esi + 0x190]
// 00463125  5e                   pop esi
// 00463126  e9150d2200           jmp 0x683e40

struct Inner {
    void method();
};

struct CSettingsExplorer {
    char pad[0x190];
    Inner field_190;
    void func();
};

extern "C" void* __cdecl sub_40F060();
extern "C" void __cdecl sub_447790();
extern "C" void __cdecl sub_683E40();

void CSettingsExplorer::func()
{
    Inner* p = (Inner*)sub_40F060();
    p->method();
    field_190.method();
}
