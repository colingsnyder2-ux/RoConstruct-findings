// roc 2009-12 0044d920  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044d920
//
// 0044d920  e8d76b3a00           call 0x7f44fc
// 0044d925  e8f4613a00           call 0x7f3b1e
// 0044d92a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0044d92d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX00001a@@QAEHXZ)

namespace ns_ROCX00001a {
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
