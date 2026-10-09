// roc 2012-06 00426c50  unit: CRBXHTMLControlSite  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00426c50
//
// 00426c50  837c240804           cmp dword ptr [esp + 8], 4
// 00426c55  7506                 jne 0x426c5d
// 00426c57  b805400080           mov eax, 0x80004005
// 00426c5c  c3                   ret 
// 00426c5d  8b442404             mov eax, dword ptr [esp + 4]
// 00426c61  50                   push eax
// 00426c62  e879ffffff           call 0x426be0
// 00426c67  83c404               add esp, 4
// 00426c6a  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00003d@@YAHHH@Z)

namespace ns_ROCX00003d {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
