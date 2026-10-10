// from server: 67% by colin
struct RBX_VRocket_FactoryProduct {
    char pad[0x144];
    void construct();
};

extern "C" void __stdcall sub_5EF250(void*);

void RBX_VRocket_FactoryProduct::construct()
{
    sub_5EF250(this);
    *(int*)((char*)this + 0x00) = 0x7bfcf4;
    *(int*)((char*)this + 0x04) = 0x7bfcec;
    *(int*)((char*)this + 0x10) = 0x7bfce4;
    *(int*)((char*)this + 0x14) = 0x7bfcd4;
    *(int*)((char*)this + 0x2c) = 0x7bfcc4;
    *(int*)((char*)this + 0x44) = 0x7bfcb4;
    *(int*)((char*)this + 0x5c) = 0x7bfca4;
    *(int*)((char*)this + 0x74) = 0x7bfc94;
    *(int*)((char*)this + 0x8c) = 0x7bfc84;
    *(int*)((char*)this + 0xe8) = 0x7bfc6c;
    *(int*)((char*)this + 0xf0) = 0x7bfc60;
    *(char*)((char*)this + 0xfc) = 0;
    *(float*)((char*)this + 0x108) = 0.0f;
    *(float*)((char*)this + 0x10c) = 0.0f;
    *(int*)((char*)this + 0x100) = 0;
    *(float*)((char*)this + 0x110) = 0.0f;
    *(int*)((char*)this + 0x104) = 0;
    *(float*)((char*)this + 0x114) = *(float*)0x79f2fc;
    *(char*)((char*)this + 0x118) = 0;
    *(float*)((char*)this + 0x11c) = *(float*)0x7bf83c;
    *(float*)((char*)this + 0x120) = *(float*)0x7a836c;
    *(float*)((char*)this + 0x124) = *(float*)0x7a8380;
    *(float*)((char*)this + 0x128) = *(float*)0x7a8370;
    *(float*)((char*)this + 0x12c) = *(float*)0x7bf7b4;
    *(float*)((char*)this + 0x130) = *(float*)0x7bf764;
    *(float*)((char*)this + 0x134) = *(float*)0x7bf750;
    *(float*)((char*)this + 0x138) = *(float*)0x7bf750;
    *(float*)((char*)this + 0x13c) = 0.0f;
    *(float*)((char*)this + 0x140) = *(float*)0x7a0be0;
}
