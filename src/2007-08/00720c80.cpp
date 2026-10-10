// from server: 31% by colin
struct CXTCaptionButtonThemeOfficeXP {
    char pad[0x24];
    int field_24;
    char pad2[0x30 - 0x28];
    int field_30;
    char pad3[0x48 - 0x34];
    int field_48;
    char pad4[0x54 - 0x4c];
    int field_54;
    char pad5[0x7c - 0x58];
    int field_7c;
    char pad6[0x8c - 0x80];
    int field_8c;
    char pad7[0x98 - 0x90];
    int field_98;
    char pad8[0xa4 - 0x9c];
    int field_a4;
    char pad9[0xb0 - 0xa8];
    int field_b0;
    char pad10[0xbc - 0xb4];
    int field_bc;

    void sub_720940();
    void init();
};

extern "C" void* __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(void* p, int n);

void CXTCaptionButtonThemeOfficeXP::init()
{
    sub_720940();

    int v = field_7c;
    int n = (v != 0) ? 0x1e : 0x0f;

    field_24 = (int)sub_668770(sub_668f70(), n);
    field_8c = (int)sub_668770(sub_668f70(), 0x21);
    field_98 = (int)sub_668770(sub_668f70(), 0x1f);
    field_54 = (int)sub_668770(sub_668f70(), 0x10);
    field_48 = (int)sub_668770(sub_668f70(), 0x20);
    field_30 = (int)sub_668770(sub_668f70(), 0x2e);
    field_b0 = (int)sub_668770(sub_668f70(), 0x2d);
    field_a4 = (int)sub_668770(sub_668f70(), 0x2f);
    field_bc = (int)sub_668770(sub_668f70(), 0x24);
}
