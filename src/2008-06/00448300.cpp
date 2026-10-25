// from server: 100% by tester
// roc 2008-06 00448300  unit: VCRenderSettings::?$FactoryProduct  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448300
//
// 00448300  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00448304  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00448307  33c0                 xor eax, eax
// 00448309  3b542408             cmp edx, dword ptr [esp + 8]
// 0044830d  0f94c0               sete al
// 00448310  c3                   ret 

struct CRenderSettingsItem {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

bool equals(const CRenderSettingsItem* self, int other) {
    return self->field_c == other;
}
