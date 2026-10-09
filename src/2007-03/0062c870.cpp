// roc 2007-03 0062c870  unit: seg_00620000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062c870
//
// 0062c870  6a01                 push 1
// 0062c872  e849f8ffff           call 0x62c0c0
// 0062c877  50                   push eax
// 0062c878  e853b50600           call 0x697dd0
// 0062c87d  50                   push eax
// 0062c87e  e80d1effff           call 0x61e690
// 0062c883  83c408               add esp, 8
// 0062c886  c3                   ret 
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
