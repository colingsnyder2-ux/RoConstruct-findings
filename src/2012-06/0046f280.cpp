// roc 2012-06 0046f280  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046f280
//
// 0046f280  e81f3b5100           call 0x982da4
// 0046f285  e848315100           call 0x9823d2
// 0046f28a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0046f28d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX00000d@@QAEHXZ)

namespace ns_ROCX00000d {
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
