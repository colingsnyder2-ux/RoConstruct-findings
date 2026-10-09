// roc 2011-06 0082aee0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082aee0
//
// 0082aee0  6a01                 push 1
// 0082aee2  e819faffff           call 0x82a900
// 0082aee7  50                   push eax
// 0082aee8  e8b3900700           call 0x8a3fa0
// 0082aeed  50                   push eax
// 0082aeee  e849f5fdff           call 0x80a43c
// 0082aef3  83c408               add esp, 8
// 0082aef6  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX000002@@YAXXZ)

namespace ns_ROCX000002 {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
