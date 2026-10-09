// roc 2010-06 007c9430  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c9430
//
// 007c9430  6a01                 push 1
// 007c9432  e8f9f9ffff           call 0x7c8e30
// 007c9437  50                   push eax
// 007c9438  e8c3d90700           call 0x846e00
// 007c943d  50                   push eax
// 007c943e  e83be9fdff           call 0x7a7d7e
// 007c9443  83c408               add esp, 8
// 007c9446  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX000006@@YAXXZ)

namespace ns_ROCX000006 {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
