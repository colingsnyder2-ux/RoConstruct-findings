// from server: 64% by colin
struct GlobalSettingsItem {
    char pad[0xec];
    void* field_ec;
    void construct();
};

void GlobalSettingsItem::construct()
{
    void* p = field_ec;
    *(int*)((char*)this + 0x00) = 0x7b3604;
    *(int*)((char*)this + 0x04) = 0x7b35fc;
    *(int*)((char*)this + 0x10) = 0x7b35f4;
    *(int*)((char*)this + 0x14) = 0x7b35e4;
    *(int*)((char*)this + 0x2c) = 0x7b35d4;
    *(int*)((char*)this + 0x44) = 0x7b35c4;
    *(int*)((char*)this + 0x5c) = 0x7b35b4;
    *(int*)((char*)this + 0x74) = 0x7b35a4;
    *(int*)((char*)this + 0x8c) = 0x7b3594;
    *(int*)((char*)this + 0xe8) = 0x7b3588;
    *(int*)((char*)this + 0x158) = 0x7b3578;
    *(int*)((char*)this + 0x170) = 0x7b356c;
    *(int*)((char*)this + 0x17c) = 0x7b3554;

    *(int*)((char*)p + 4) = 0x7b3548;
    *(int*)((char*)p + 8) = 0x7b3540;
    *(int*)((char*)p + 0xc) = 0x7b3524;

    *(int*)((char*)this + 0xe8) = (int)p - 0x198;
    *(int*)((char*)this + 0xe8) = (int)p - 0x1a0;
    *(int*)((char*)this + 0xe8) = (int)p - 0x1a8;

    extern void __stdcall sub_576480();
    sub_576480();
}
