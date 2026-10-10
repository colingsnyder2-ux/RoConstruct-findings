// from server: 79% by colin
// roc 2007-08 0066c420  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c420

extern "C" int __stdcall sub_685720(int, const char*, void*, int);
extern "C" int __stdcall sub_685780(int, const char*, void*, int);
extern "C" int __stdcall sub_6857c0(int, const char*, void*, int);

struct CPatchedControlComboBox {
    char pad0[0x15c];
    int field_15c;
    char pad1[0x17c - 0x160];
    int field_17c;
    int field_180;
    char pad2[0x19c - 0x184];
    int field_19c;
    int field_1a0;
    int field_1a8;
    char pad3[0x1b0 - 0x1ac];
    int field_1b0;
    int field_1b8;
    char pad4[0x1c8 - 0x1bc];
    int field_1c8;

    void sub_66c390(int);
    void sub_635f20(int);
    void sub_636fb0(int);
    void sub_66c420(int);
};

void CPatchedControlComboBox::sub_66c420(int a1) {
    sub_66c390(a1);
    sub_685780(a1, (const char*)0x7cb060, &field_17c, 1);
    sub_685720(a1, (const char*)0x797ca8, &field_15c, 0);
    sub_685720(a1, (const char*)0x7cb054, &field_180, 0);
    if (*(int*)(a1 + 0x28) > 8) {
        sub_6857c0(a1, (const char*)0x7cb048, &field_19c, (int)0x785954);
        sub_685720(a1, (const char*)0x7cb030, &field_1a8, 0);
        sub_685780(a1, (const char*)0x7cb020, &field_1a0, 0);
        sub_685720(a1, (const char*)0x7cb014, &field_1b0, 0);
        sub_685720(a1, (const char*)0x7cb000, &field_1b8, 0xc);
    }
    if (*(int*)(a1 + 0x28) > 0x10) {
        sub_685720(a1, (const char*)0x7caff4, &field_1c8, 0);
    }
    if (*(int*)(a1 + 0x24) != 0) {
        sub_635f20(field_17c);
        sub_636fb0(field_1a8);
    }
}
