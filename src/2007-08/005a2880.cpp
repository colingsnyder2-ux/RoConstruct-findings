// from server: 33% by colin
struct VShirtGraphic {
    char pad0[0xe8];
    char field_e8[0x20];
    void* construct();
    void setProp(const char*);
};

extern "C" void __stdcall sub_77e6a4();
extern "C" void __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();
extern "C" void* __cdecl sub_52cb30();
extern "C" void __cdecl sub_541bf0();
extern "C" void __cdecl sub_5a2640();

void* VShirtGraphic::construct()
{
    sub_5a2640();
    *(int*)((char*)this + 0) = 0x7b474c;
    *(int*)((char*)this + 4) = 0x7b4740;
    *(int*)((char*)this + 0x10) = 0x7b4738;
    *(int*)((char*)this + 0x14) = 0x7b4728;
    *(int*)((char*)this + 0x2c) = 0x7b4718;
    *(int*)((char*)this + 0x44) = 0x7b4708;
    *(int*)((char*)this + 0x5c) = 0x7b46f8;
    *(int*)((char*)this + 0x74) = 0x7b46e8;
    *(int*)((char*)this + 0x8c) = 0x7b46d8;
    sub_77e6a4();
    *(void**)((char*)this + 0xe8 + 0x1c) = sub_52cb30();
    sub_77e698();
    sub_541bf0();
    sub_77e6ac();

    return this;
}
