// roc 2009-06 0072a6b0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072a6b0
//
// 0072a6b0  6a01                 push 1
// 0072a6b2  e8f9f9ffff           call 0x72a0b0
// 0072a6b7  50                   push eax
// 0072a6b8  e8a3b30800           call 0x7b5a60
// 0072a6bd  50                   push eax
// 0072a6be  e803e9feff           call 0x718fc6
// 0072a6c3  83c408               add esp, 8
// 0072a6c6  c3                   ret 
// copied from an identical function in another client (function ?sub_006330C0@ns_ROCX000004@@YAXXZ)

namespace ns_ROCX000004 {
extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
}
