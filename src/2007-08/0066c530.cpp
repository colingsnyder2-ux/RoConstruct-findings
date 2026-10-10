// from server: 72% by colin
struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad[0x15c];
    int field_0x15c;
    char pad2[0xc];
    int field_0x16c;
    int field_0x170;
    char pad3[0xc];
    int field_0x180;
    char pad4[0x14];
    int field_0x198;
    int field_0x19c;
    int field_0x1a0;
    void Func1(void*);
    void sub_66C530(void*);
};

extern "C" void __stdcall sub_685720(void*, const char*, int*, int);
extern "C" void __stdcall sub_685780(void*, const char*, int*, int);
extern "C" void __stdcall sub_6857C0(void*, const char*, int*, int);
extern "C" void __stdcall sub_6C6F60(void*, int);

void CXTPCustomizeSheet_CCustomizeEdit::sub_66C530(void* param)
{
    Func1(param);
    if (*(unsigned int*)((char*)param + 0x28) > 5) {
        sub_685780(param, (const char*)0x7cb088, &field_0x16c, 0);
        sub_685720(param, (const char*)0x797ca8, &field_0x15c, 0);
    }
    if (*(unsigned int*)((char*)param + 0x28) > 7) {
        sub_685780(param, (const char*)0x7cb07c, &field_0x170, 0);
    }
    if (*(unsigned int*)((char*)param + 0x28) > 8) {
        sub_6857C0(param, (const char*)0x7cb048, &field_0x180, (int)0x785954);
        sub_685720(param, (const char*)0x7cb030, &field_0x198, 0);
    }
    if (*(unsigned int*)((char*)param + 0x28) > 0x10) {
        sub_685720(param, (const char*)0x7caff4, &field_0x19c, 0);
    }
    if (*(unsigned int*)((char*)param + 0x28) > 0x12) {
        sub_685780(param, (const char*)0x7cb06c, &field_0x1a0, 0);
    }
    if (*(int*)((char*)param + 0x24) != 0) {
        sub_6C6F60(this, field_0x198);
    }
}
