// roc 2011-06 00550830  unit: seg_00550000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00550830
//
// 00550830  6a00                 push 0
// 00550832  6a00                 push 0
// 00550834  6a00                 push 0
// 00550836  e8a5110100           call 0x5619e0
// 0055083b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055083f  898110010000         mov dword ptr [ecx + 0x110], eax
// 00550845  c3                   ret 
// copied from an identical function in another client (function ?DialogTemplate_init@ns_ROCX000001@@YAXPAUDialogTemplate@1@@Z)

namespace ns_ROCX000001 {
struct DialogTemplate {
    char pad[0x110];
    int field110;
};

extern "C" int __stdcall sub_72D160(int, int, int);

void __cdecl DialogTemplate_init(DialogTemplate* self) {
    self->field110 = sub_72D160(0, 0, 0);
}
}
