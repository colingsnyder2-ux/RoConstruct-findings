// from server: 100% by tester
// roc 2008-06 004597c0  unit: CRobloxView  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004597c0
//
// 004597c0  56                   push esi
// 004597c1  8bf1                 mov esi, ecx
// 004597c3  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 004597c9  85c9                 test ecx, ecx
// 004597cb  7418                 je 0x4597e5
// 004597cd  8b01                 mov eax, dword ptr [ecx]
// 004597cf  8b5068               mov edx, dword ptr [eax + 0x68]
// 004597d2  ffd2                 call edx
// 004597d4  8bce                 mov ecx, esi
// 004597d6  c786d801000000000000 mov dword ptr [esi + 0x1d8], 0
// 004597e0  e8cbfaffff           call 0x4592b0
// 004597e5  33c0                 xor eax, eax
// 004597e7  5e                   pop esi
// 004597e8  c20800               ret 8

struct CRobloxView {
    char pad[0x1d8];
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
