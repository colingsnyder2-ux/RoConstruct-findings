// from server: 70% by colin
// roc 2007-08 0059fba0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059fba0

extern "C" {
    __declspec(dllimport) void* __stdcall GetCurrentThreadId(void);
    __declspec(dllimport) void __stdcall GetSystemTimeAsFileTime(void*);
}

struct std_string {
    void* data[4];
    std_string(const char*);
    ~std_string();
};

struct RBX_GlobalSettingsItem {
    char pad[0x100];
    int field_e8;
    unsigned char field_ec;
    unsigned char field_ed;
    unsigned char field_ee;
};

struct RBX_VGameSettings_GlobalSettingsItem {
    void* vtable;
    void* vtable4;
    char pad8[8];
    void* vtable10;
    void* vtable14;
    char pad18[0x14];
    void* vtable2c;
    char pad30[0x14];
    void* vtable44;
    char pad48[0x14];
    void* vtable5c;
    char pad60[0x14];
    void* vtable74;
    char pad78[0x14];
    void* vtable8c;
    char pad90[0x58];
    int field_e8;
    unsigned char field_ec;
    unsigned char field_ed;
    unsigned char field_ee;

    RBX_VGameSettings_GlobalSettingsItem();
};

void __fastcall sub_59FAC0(RBX_VGameSettings_GlobalSettingsItem* self);
void __fastcall sub_541BF0(RBX_VGameSettings_GlobalSettingsItem* self, void* arg);

RBX_VGameSettings_GlobalSettingsItem::RBX_VGameSettings_GlobalSettingsItem()
{
    sub_59FAC0(this);
    this->vtable = (void*)0x7b3464;
    this->vtable4 = (void*)0x7b345c;
    this->vtable10 = (void*)0x7b3454;
    this->vtable14 = (void*)0x7b3444;
    this->vtable2c = (void*)0x7b3434;
    this->vtable44 = (void*)0x7b3424;
    this->vtable5c = (void*)0x7b3414;
    this->vtable74 = (void*)0x7b3404;
    this->vtable8c = (void*)0x7b33f4;
    this->field_e8 = 0x1e;
    this->field_ec = 1;
    this->field_ed = 0;
    this->field_ee = 1;

    std_string str("Game Options");
    sub_541BF0(this, &str);
    str.~std_string();
}
