// from server: 97% by colin
// roc 2007-08 00637440  unit: CPatchedControlComboBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637440
//
// 00637440  56                   push esi
// 00637441  8bf1                 mov esi, ecx
// 00637443  e8d8feffff           call 0x637320
// 00637448  83f8ff               cmp eax, -1
// 0063744b  7427                 je 0x637474
// 0063744d  8bce                 mov ecx, esi
// 0063744f  e85c81dfff           call 0x42f5b0
// 00637454  85c0                 test eax, eax
// 00637456  7513                 jne 0x63746b
// 00637458  398678010000         cmp dword ptr [esi + 0x178], eax
// 0063745e  7514                 jne 0x637474
// 00637460  8b06                 mov eax, dword ptr [esi]
// 00637462  8b5074               mov edx, dword ptr [eax + 0x74]
// 00637465  ffd2                 call edx
// 00637467  85c0                 test eax, eax
// 00637469  7409                 je 0x637474
// 0063746b  6a09                 push 9
// 0063746d  8bce                 mov ecx, esi
// 0063746f  e82c500000           call 0x63c4a0
// 00637474  8bce                 mov ecx, esi
// 00637476  c786b401000001000000 mov dword ptr [esi + 0x1b4], 1
// 00637480  e89bfeffff           call 0x637320
// 00637485  898684010000         mov dword ptr [esi + 0x184], eax
// 0063748b  8bce                 mov ecx, esi
// 0063748d  5e                   pop esi
// 0063748e  e97d500000           jmp 0x63c510

struct CPatchedControlComboBox {
    char pad_0[0x178];
    int field_178;
    char pad_17C[0x184 - 0x17C];
    int field_184;
    char pad_188[0x1B4 - 0x188];
    int field_1B4;
    int sub_637320();
    int sub_42F5B0();
    int sub_63C4A0(int);
    int sub_63C510();
    int method_74();
    int func();
};

int CPatchedControlComboBox::func() {
    int result = sub_637320();
    if (result != -1) {
        int r2 = sub_42F5B0();
        if (r2 != 0) {
            sub_63C4A0(9);
        } else if (field_178 != 0) {
            // skip
        } else {
            int r3 = method_74();
            if (r3 != 0) {
                sub_63C4A0(9);
            }
        }
    }
    field_1B4 = 1;
    field_184 = sub_637320();
    return sub_63C510();
}
