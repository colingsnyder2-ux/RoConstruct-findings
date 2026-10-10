// from server: 54% by colin
// roc 2007-08 0048f6b0  unit: RBX::Network::Player  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f6b0

extern "C" {
    int __stdcall MSVCP80_0x77e698();
    int __stdcall MSVCP80_0x77e6a4();
    int __stdcall MSVCP80_0x77e6ac();
}

struct std_string {
    void ctor();
    void ctor(const char*);
    void dtor();
};

struct Player {
    char pad[0x8b5188];
    void ctor();
};

void __fastcall sub_48e860(Player* self);
void __fastcall sub_48f0c0(Player* self);
void __fastcall sub_4868c0(void* self);
void __fastcall sub_541bf0(Player* self, std_string* s);

void Player::ctor()
{
    sub_48e860(this);

    *(int*)((char*)this + 0xe8) = 0x79af30;
    *(int*)((char*)this + 0xf0) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0xf8) = 0;
    *(int*)((char*)this + 0xfc) = 0;
    *(int*)((char*)this + 0x100) = 0x79af40;
    *(int*)((char*)this + 0x108) = 0;
    *(int*)((char*)this + 0x10c) = 0;
    *(int*)((char*)this + 0x110) = 0;
    *(int*)((char*)this + 0x114) = 0;
    *(int*)((char*)this + 0x00) = 0x79b474;
    *(int*)((char*)this + 0x04) = 0x79b46c;
    *(int*)((char*)this + 0x10) = 0x79b464;
    *(int*)((char*)this + 0x14) = 0x79b454;
    *(int*)((char*)this + 0x2c) = 0x79b444;
    *(int*)((char*)this + 0x44) = 0x79b434;
    *(int*)((char*)this + 0x5c) = 0x79b424;
    *(int*)((char*)this + 0x74) = 0x79b414;
    *(int*)((char*)this + 0x8c) = 0x79b404;
    *(int*)((char*)this + 0xe8) = 0x79b3f4;
    *(int*)((char*)this + 0x100) = 0x79b3e4;
    *(int*)((char*)this + 0x118) = 0;
    *(int*)((char*)this + 0x11c) = 0;
    *(int*)((char*)this + 0x120) = 1;
    *(char*)((char*)this + 0x124) = 1;
    *(int*)((char*)this + 0x12c) = 0;
    *(int*)((char*)this + 0x130) = 0;
    *(char*)((char*)this + 0x134) = 0;
    *(char*)((char*)this + 0x138) = 0;
    MSVCP80_0x77e6a4();
    *(double*)((char*)this + 0x160) = 0.0;
    *(char*)((char*)this + 0x158) = 0;
    *(char*)((char*)this + 0x159) = 0;
    *(int*)((char*)this + 0x15c) = 0;
    sub_48f0c0(this);
    sub_4868c0(this);
    MSVCP80_0x77e698();
    sub_48f0c0(this);
    sub_4868c0(this);
    std_string s;
    s.ctor();
    sub_541bf0(this, &s);
    s.dtor();
}
