// roc 2007-03 00460800  unit: seg_00460000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00460800
//
// 00460800  56                   push esi
// 00460801  8bf1                 mov esi, ecx
// 00460803  e8f8f7faff           call 0x410000
// 00460808  8bc8                 mov ecx, eax
// 0046080a  e88168feff           call 0x447090
// 0046080f  8d8e90010000         lea ecx, [esi + 0x190]
// 00460815  5e                   pop esi
// 00460816  e915d21f00           jmp 0x65da30
// copied from an identical function in another client (function ?func@CSettingsExplorer@ns_ROCX00001b@@QAEXXZ)

namespace ns_ROCX00001b {
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
}
