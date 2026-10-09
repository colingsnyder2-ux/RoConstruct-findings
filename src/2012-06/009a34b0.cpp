// roc 2012-06 009a34b0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a34b0
//
// 009a34b0  6a01                 push 1
// 009a34b2  e819faffff           call 0x9a2ed0
// 009a34b7  50                   push eax
// 009a34b8  e8138f0700           call 0xa1c3d0
// 009a34bd  50                   push eax
// 009a34be  e823f0fdff           call 0x9824e6
// 009a34c3  83c408               add esp, 8
// 009a34c6  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX000005@@YAXXZ)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
