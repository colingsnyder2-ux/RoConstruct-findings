// roc 2008-06 0044b950  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044b950
//
// 0044b950  e8fb582500           call 0x6a1250
// 0044b955  e8cc4f2500           call 0x6a0926
// 0044b95a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0044b95d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX000025@@QAEHXZ)

namespace ns_ROCX000025 {
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

struct Inner {
    char pad[0x34];
    int value;
};

extern "C" Inner* __cdecl sub_6307A8();
extern "C" Inner* __cdecl sub_62FF02();

struct CRobloxModule {
    int getValue();
};

int CRobloxModule::getValue()
{
    sub_6307A8();
    Inner* p = sub_62FF02();
    return p->value;
}
}
