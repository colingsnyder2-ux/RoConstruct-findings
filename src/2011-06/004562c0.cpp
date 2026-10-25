// from server: 100% by tester
// roc 2011-06 004562c0  unit: CRenderSettingsItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004562c0
//
// 004562c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004562c4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004562c7  33c0                 xor eax, eax
// 004562c9  3b542408             cmp edx, dword ptr [esp + 8]
// 004562cd  0f94c0               sete al
// 004562d0  c3                   ret 

struct CRenderSettingsItem {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

bool equals(const CRenderSettingsItem* self, int other) {
    return self->field_c == other;
}
