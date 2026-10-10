// from server: 21% by colin
// roc 2007-08 005450b0 167 bytes
// Reconstructed from target assembly.

extern "C" {
    void* __stdcall sub_77E698();
    void* __stdcall sub_77E568();
    void* __stdcall sub_77E69C();
    void* __stdcall sub_77E6AC();
}

void* __cdecl sub_52CB30();

struct SettingsItem {
    char pad[0x1c];
    void* field_1c;
    SettingsItem(const void* inst, const void* name);
};

SettingsItem::SettingsItem(const void* inst, const void* name)
{
    char buf1[0x28];
    char buf2[0x28];
    char buf3[0x28];

    sub_77E698();
    sub_77E568();
    sub_77E69C();
    field_1c = sub_52CB30();
    sub_77E6AC();
    sub_77E6AC();
}
