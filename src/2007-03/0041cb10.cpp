// roc 2007-03 0041cb10  unit: seg_00410000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041cb10
//
// 0041cb10  837c240804           cmp dword ptr [esp + 8], 4
// 0041cb15  7506                 jne 0x41cb1d
// 0041cb17  b805400080           mov eax, 0x80004005
// 0041cb1c  c3                   ret 
// 0041cb1d  8b442404             mov eax, dword ptr [esp + 4]
// 0041cb21  50                   push eax
// 0041cb22  e869ffffff           call 0x41ca90
// 0041cb27  83c404               add esp, 4
// 0041cb2a  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00000d@@YAHHH@Z)

namespace ns_ROCX00000d {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
