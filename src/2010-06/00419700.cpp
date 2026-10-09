// roc 2010-06 00419700  unit: CRBXHTMLControlSite  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419700
//
// 00419700  837c240804           cmp dword ptr [esp + 8], 4
// 00419705  7506                 jne 0x41970d
// 00419707  b805400080           mov eax, 0x80004005
// 0041970c  c3                   ret 
// 0041970d  8b442404             mov eax, dword ptr [esp + 4]
// 00419711  50                   push eax
// 00419712  e879ffffff           call 0x419690
// 00419717  83c404               add esp, 4
// 0041971a  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX000008@@YAHHH@Z)

namespace ns_ROCX000008 {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
