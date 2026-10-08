// from server: 85% by colin
// roc 2007-08 00711190  unit: CXTColorSelectorCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00711190
//
// 00711190  8b442404             mov eax, dword ptr [esp + 4]
// 00711194  50                   push eax
// 00711195  81c144010000         add ecx, 0x144
// 0071119b  e860feffff           call 0x711000
// 007111a0  85c0                 test eax, eax
// 007111a2  7406                 je 0x7111aa
// 007111a4  8b4008               mov eax, dword ptr [eax + 8]
// 007111a7  c20400               ret 4
// 007111aa  33c0                 xor eax, eax
// 007111ac  c20400               ret 4

struct CXTColorSelectorCtrl {
    char pad[0x144];
    int field_144;
    int sub_711000(int);
    int func(int);
};

int CXTColorSelectorCtrl::func(int arg) {
    int result = sub_711000(arg);
    if (result != 0) {
        return *(int*)(result + 8);
    }
    return 0;
}
