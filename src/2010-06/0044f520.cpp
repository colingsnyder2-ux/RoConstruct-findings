// roc 2010-06 0044f520  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044f520
//
// 0044f520  e811913500           call 0x7a8636
// 0044f525  e834873500           call 0x7a7c5e
// 0044f52a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0044f52d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX000016@@QAEHXZ)

namespace ns_ROCX000016 {
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
