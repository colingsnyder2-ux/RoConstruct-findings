// from server: 45% by colin
struct VServiceProvider_Notifier {
    char pad0[0xc];
    int field_c;
    char pad10[0x80];
    int ctor();
};

extern "C" int __stdcall sub_549950();
extern "C" int __stdcall sub_549f40();

int VServiceProvider_Notifier::ctor()
{
    sub_549950();
    field_c = 0;
    *(int*)((char*)this + 0x00) = 0x7a7284;
    *(int*)((char*)this + 0x04) = 0x7a727c;
    *(int*)((char*)this + 0x10) = 0x7a7274;
    *(int*)((char*)this + 0x14) = 0x7a7264;
    *(int*)((char*)this + 0x2c) = 0x7a7254;
    *(int*)((char*)this + 0x44) = 0x7a7244;
    *(int*)((char*)this + 0x5c) = 0x7a7234;
    *(int*)((char*)this + 0x74) = 0x7a7224;
    *(int*)((char*)this + 0x8c) = 0x7a7214;
    field_c = sub_549f40();
    return (int)this;
}
