// roc 2007-03 0050a6d0  unit: seg_00500000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050a6d0
//
// 0050a6d0  6a00                 push 0
// 0050a6d2  6a00                 push 0
// 0050a6d4  6a00                 push 0
// 0050a6d6  e8e5332200           call 0x72dac0
// 0050a6db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050a6df  898110010000         mov dword ptr [ecx + 0x110], eax
// 0050a6e5  c3                   ret 
// copied from an identical function in another client (function ?DialogTemplate_init@ns_ROCX000002@@YAXPAUDialogTemplate@1@@Z)

namespace ns_ROCX000002 {
struct DialogTemplate {
    char pad[0x110];
    int field110;
};

extern "C" int __stdcall sub_72D160(int, int, int);

void __cdecl DialogTemplate_init(DialogTemplate* self) {
    self->field110 = sub_72D160(0, 0, 0);
}
}
