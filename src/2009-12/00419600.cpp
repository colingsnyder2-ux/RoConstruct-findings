// roc 2009-12 00419600  unit: CRBXHTMLControlSite  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00419600
//
// 00419600  837c240804           cmp dword ptr [esp + 8], 4
// 00419605  7506                 jne 0x41960d
// 00419607  b805400080           mov eax, 0x80004005
// 0041960c  c3                   ret 
// 0041960d  8b442404             mov eax, dword ptr [esp + 4]
// 00419611  50                   push eax
// 00419612  e879ffffff           call 0x419590
// 00419617  83c404               add esp, 4
// 0041961a  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00000c@@YAHHH@Z)

namespace ns_ROCX00000c {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
