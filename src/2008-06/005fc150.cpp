// from server: 45% by colin
struct LocalBackpackItem {
    char pad[0x168];
    int field_168;
    int field_16c;
    char pad2[0x178 - 0x170];
    int field_178;
    int field_17c;
    char pad3[0x188 - 0x180];
    int field_188;

    void func_005fc150();
};

extern void func_0055afd0();
extern void func_005e5a80();
extern void func_00456e80();

void LocalBackpackItem::func_005fc150()
{
    func_0055afd0();
    if (field_188 != 0) {
        int* p = &field_188;
        int v = *p;
        if (v != 0) {
            func_005e5a80();
        }
        v = *p;
        if (v != 0) {
            func_005e5a80();
        }
        v = *p;
        if (v != 0) {
            func_005e5a80();
        }
        v = *p;
        if (v != 0) {
            func_005e5a80();
        }
        func_00456e80();
    }
}
