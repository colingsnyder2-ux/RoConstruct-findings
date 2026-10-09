// roc 2009-06 00447740  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00447740
//
// 00447740  e87d1f2d00           call 0x7196c2
// 00447745  e8ac152d00           call 0x718cf6
// 0044774a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0044774d  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxModule@ns_ROCX00000c@@QAEHXZ)

namespace ns_ROCX00000c {
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
