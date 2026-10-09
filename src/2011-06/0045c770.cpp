// roc 2011-06 0045c770  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045c770
//
// 0045c770  e891e53a00           call 0x80ad06
// 0045c775  e8a2db3a00           call 0x80a31c
// 0045c77a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0045c77d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX000018@@QAEHXZ)

namespace ns_ROCX000018 {
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
