// roc 2008-06 006a3dd0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3dd0
//
// 006a3dd0  6a01                 push 1
// 006a3dd2  e8d9f9ffff           call 0x6a37b0
// 006a3dd7  50                   push eax
// 006a3dd8  e833c20700           call 0x720010
// 006a3ddd  50                   push eax
// 006a3dde  e843ceffff           call 0x6a0c26
// 006a3de3  83c408               add esp, 8
// 006a3de6  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX000000@@YAXXZ)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
