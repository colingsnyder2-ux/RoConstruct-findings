// from server: 100% by colin
// roc 2007-08 00500540  unit: G3D::Shader  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500540
//
// 00500540  e8bbfdffff           call 0x500300
// 00500545  84c0                 test al, al
// 00500547  740e                 je 0x500557
// 00500549  e8c2fdffff           call 0x500310
// 0050054e  84c0                 test al, al
// 00500550  7405                 je 0x500557
// 00500552  e939eeffff           jmp 0x4ff390
// 00500557  e894fdffff           call 0x5002f0
// 0050055c  84c0                 test al, al
// 0050055e  740e                 je 0x50056e
// 00500560  e8abfdffff           call 0x500310
// 00500565  84c0                 test al, al
// 00500567  7405                 je 0x50056e
// 00500569  e922eeffff           jmp 0x4ff390
// 0050056e  e9d9071300           jmp 0x630d4c

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
