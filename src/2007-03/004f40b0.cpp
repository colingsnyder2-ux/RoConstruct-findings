// roc 2007-03 004f40b0  unit: seg_004f0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f40b0
//
// 004f40b0  e8bbfdffff           call 0x4f3e70
// 004f40b5  84c0                 test al, al
// 004f40b7  740e                 je 0x4f40c7
// 004f40b9  e8c2fdffff           call 0x4f3e80
// 004f40be  84c0                 test al, al
// 004f40c0  7405                 je 0x4f40c7
// 004f40c2  e939eeffff           jmp 0x4f2f00
// 004f40c7  e894fdffff           call 0x4f3e60
// 004f40cc  84c0                 test al, al
// 004f40ce  740e                 je 0x4f40de
// 004f40d0  e8abfdffff           call 0x4f3e80
// 004f40d5  84c0                 test al, al
// 004f40d7  7405                 je 0x4f40de
// 004f40d9  e922eeffff           jmp 0x4f2f00
// 004f40de  e9ffb01200           jmp 0x61f1e2
// copied from an identical function in another client (function ?sub_00500540@ns_ROCX000001@@YAXXZ)

namespace ns_ROCX000001 {
extern "C" bool __cdecl sub_00500300();
extern "C" bool __cdecl sub_00500310();
extern "C" bool __cdecl sub_005002f0();
extern "C" void __cdecl sub_004ff390();
extern "C" void __cdecl sub_00630d4c();

void sub_00500540()
{
    if (sub_00500300() && sub_00500310()) {
        sub_004ff390();
        return;
    }
    if (sub_005002f0() && sub_00500310()) {
        sub_004ff390();
        return;
    }
    sub_00630d4c();
}
}
