// from server: 100% by colin
// roc 2007-08 004567d0  unit: CRobloxView  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004567d0
//
// 004567d0  56                   push esi
// 004567d1  8bf1                 mov esi, ecx
// 004567d3  8b8e98010000         mov ecx, dword ptr [esi + 0x198]
// 004567d9  85c9                 test ecx, ecx
// 004567db  7418                 je 0x4567f5
// 004567dd  8b01                 mov eax, dword ptr [ecx]
// 004567df  8b5068               mov edx, dword ptr [eax + 0x68]
// 004567e2  ffd2                 call edx
// 004567e4  8bce                 mov ecx, esi
// 004567e6  c7869801000000000000 mov dword ptr [esi + 0x198], 0
// 004567f0  e8ebfaffff           call 0x4562e0
// 004567f5  33c0                 xor eax, eax
// 004567f7  5e                   pop esi
// 004567f8  c20800               ret 8

struct CRobloxView {
    char pad[0x198];
    void* field_198;
    int sub_4562E0();
    int sub_4567D0(int, int);
};

int CRobloxView::sub_4567D0(int, int) {
    if (field_198) {
        (*(void (__thiscall**)(void*))(*(int*)field_198 + 0x68))(field_198);
        field_198 = 0;
        sub_4562E0();
    }
    return 0;
}
