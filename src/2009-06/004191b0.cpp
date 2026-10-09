// roc 2009-06 004191b0  unit: CRBXHTMLControlSite  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004191b0
//
// 004191b0  837c240804           cmp dword ptr [esp + 8], 4
// 004191b5  7506                 jne 0x4191bd
// 004191b7  b805400080           mov eax, 0x80004005
// 004191bc  c3                   ret 
// 004191bd  8b442404             mov eax, dword ptr [esp + 4]
// 004191c1  50                   push eax
// 004191c2  e879ffffff           call 0x419140
// 004191c7  83c404               add esp, 4
// 004191ca  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00003c@@YAHHH@Z)

namespace ns_ROCX00003c {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
