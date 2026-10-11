// from server: 54% by colin
struct LocalBackpackItem {
    char pad[0x168];
    int field_168;
    int field_16c;
    char pad2[0x190 - 0x170];
    int field_190;
    char pad3[0x1a8 - 0x194];
    int field_1a8;
    void func_005fc1d0();
};

extern "C" void __stdcall sub_0055afd0();
extern "C" void __stdcall sub_005e5a80();
extern "C" void __stdcall sub_00456e80();

void LocalBackpackItem::func_005fc1d0()
{
    sub_0055afd0();
    if (field_190 != 0) {
        int* p = &field_190;
        int v = *p;
        if (v != 0) {
            sub_005e5a80();
        }
        v = *p;
        if (v != 0) {
            sub_005e5a80();
        }
        sub_00456e80();
    }
    field_1a8 = -1;
}
