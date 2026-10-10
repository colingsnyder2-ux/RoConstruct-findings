// from server: 37% by colin
struct RBX_ScoreHud {
    char pad[0xfc];
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    RBX_ScoreHud(int);
};

extern "C" void __cdecl sub_555c70();
extern "C" void __cdecl sub_450d00();
extern "C" void __cdecl sub_40e590();

RBX_ScoreHud::RBX_ScoreHud(int arg)
{
    sub_555c70();
    *(int*)((char*)this + 0xfc) = 0x788350;
    *(int*)((char*)this + 0x100) = 0x78835c;
    *(int*)((char*)this) = 0x7c446c;
    *(int*)((char*)this + 4) = 0x7c4464;
    *(int*)((char*)this + 0x10) = 0x7c445c;
    *(int*)((char*)this + 0x14) = 0x7c444c;
    *(int*)((char*)this + 0x2c) = 0x7c443c;
    *(int*)((char*)this + 0x44) = 0x7c442c;
    *(int*)((char*)this + 0x5c) = 0x7c441c;
    *(int*)((char*)this + 0x74) = 0x7c440c;
    *(int*)((char*)this + 0x8c) = 0x7c43fc;
    *(int*)((char*)this + 0xe8) = 0x7c43f4;
    *(int*)((char*)this + 0xfc) = 0x7c43e8;
    *(int*)((char*)this + 0x100) = 0x7c43dc;
    *(int*)((char*)this + 0x104) = 0;
    *(int*)((char*)this + 0x108) = 0;
    if (arg) {
        sub_450d00();
        *(int*)((char*)this + 0x104) = (int)this;
    } else {
        *(int*)((char*)this + 0x104) = 0;
    }
    if (arg) {
        sub_40e590();
        *(int*)((char*)this + 0x108) = (int)this;
    } else {
        *(int*)((char*)this + 0x108) = 0;
    }
}
