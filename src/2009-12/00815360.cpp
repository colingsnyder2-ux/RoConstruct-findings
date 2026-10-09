// roc 2009-12 00815360  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815360
//
// 00815360  6a01                 push 1
// 00815362  e8f9f9ffff           call 0x814d60
// 00815367  50                   push eax
// 00815368  e8b3d80700           call 0x892c20
// 0081536d  50                   push eax
// 0081536e  e8cbe8fdff           call 0x7f3c3e
// 00815373  83c408               add esp, 8
// 00815376  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX00000a@@YAXXZ)

namespace ns_ROCX00000a {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
