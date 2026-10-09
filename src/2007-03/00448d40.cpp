// roc 2007-03 00448d40  unit: seg_00440000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00448d40
//
// 00448d40  e8635f1d00           call 0x61eca8
// 00448d45  e846561d00           call 0x61e390
// 00448d4a  8b4034               mov eax, dword ptr [eax + 0x34]
// 00448d4d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX000010@@QAEHXZ)

namespace ns_ROCX000010 {
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
