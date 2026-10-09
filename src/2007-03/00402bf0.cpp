// roc 2007-03 00402bf0  unit: seg_00400000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402bf0
//
// 00402bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00402bf4  83403001             add dword ptr [eax + 0x30], 1
// 00402bf8  8b4030               mov eax, dword ptr [eax + 0x30]
// 00402bfb  c20400               ret 4
// copied from an identical function in another client (function ?f@ns_ROCX000019@@YGHPAUS@1@@Z)

namespace ns_ROCX000019 {
struct S {
    char pad[0x30];
    int value30;
};

int __stdcall f(S* s)
{
    s->value30 = s->value30 + 1;
    return s->value30;
}
}
